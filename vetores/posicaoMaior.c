#include <stdio.h>

int main(){

    int vetor[10],i,maior, posicao;

    for( i = 0; i < 10; i++)
    {
        printf("Numeros vetor:");
        scanf("%d",&vetor[i]);
    }

    printf("\n");

    for( i = 0; i < 10; i++)
    {
        if (i==0 || maior < vetor[i]) {
           maior = vetor[i];
           posicao = i;

        }  
    }
    
    printf("A posicao do maior elemento é %d\n",posicao);
    
    return 0;
}