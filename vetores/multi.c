#include <stdio.h>

int main(){

    int vetor[10],vetor1[10];
    int c,i,cont=0,j;

    for( i = 0; i < 10; i++)
    {
        printf("Digite os numeros:");
        scanf("%d",&vetor[i]);
    }

    for( i = 0; i < 10; i++)
    {
        vetor1[i]=vetor[i]; //NÃO ESQUECER DE COLOCAR I
    }
    
    printf("Digite c:");
    scanf("%d",&c);
    

    for( i = 0; i < 10; i++)
    {
       for(j = i+1; j < 10; j++)
       {
           if (vetor[i]*vetor1[j] == c) {
            printf("Os valores %d e %d multplicados dá %d\n",vetor[i], vetor[j],c);
            cont=1;
           }
           
       }
       
    }
    
    if (cont == 0) {
        printf("Não tem\n");
    }
    
    return 0;
}