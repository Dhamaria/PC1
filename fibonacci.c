#include <stdio.h>

int main(){

   int num,aux,atual=1,ant=0,cont=1;

   scanf("%d",&num);

    while(cont <= num){
        printf("%d\n",atual);
        aux= atual;
        atual= atual+ant;
        ant = aux;
        cont++;
    }
    
    return 0;
}