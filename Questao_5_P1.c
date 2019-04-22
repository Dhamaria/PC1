#include<stdio.h>
#include<stdlib.h>

int main() {
    char cpf[14], cpfS[12], ch[2];
    int j = 0, soma = 0, resto = 0, flag = 0;
    scanf("%s", cpf);

    for(int i = 0; i < 14; i++) {
        if(cpf[i] != '.' && cpf[i] != '-'){
            cpfS[j] = cpf[i];
            j++;
        }
    }
    cpfS[11] = '\0';

    j = 10;
    ch[1] = '\0';
    for(int i = 0; i < 9; i++) {
        ch[0] = cpfS[i];
        soma = soma + (atoi(ch)*j);
        j--;
    }

    soma = soma * 10;
    resto = soma % 11;


    ch[0] = cpfS[9];
    if (resto == 10){
        resto = 0;
    }
    
    if(resto != atoi(ch)) {
        flag = 0;
    } else {
        flag = 1;;
    }

    resto = 0;
    soma = 0;

    j = 11 ;
    ch[1] = '\0';
    for(int i = 0; i < 10; i++) {
        ch[0] = cpfS[i];
        soma = soma + (atoi(ch)*j);
        j--;
    }

    soma = soma * 10;
    resto = soma % 11;

    ch[0]= cpfS[10];
    if (resto == 10){
        resto = 0;
    }

    if(resto != atoi(ch)) {
        flag = 0;
    } else {
        flag = 1;
    }

    if (flag == 1){
        printf("Valido\n");
    }else{
        printf("Invalido\n");
    }
    
   return 0; 
}
