#include <stdio.h>

int main(){

    double vetor[10],result=0,media;
    int i;

    for( i = 0; i < 10; i++)
    {
        printf("Numeros:");
        scanf("%lf",&vetor[i]);
    }

    for( i = 0; i < 10; i++)
    {
        result = (result + vetor[i]);
    }
    
    media = result/10;

    printf("O resultado é: %.2lf\n",media);
    
    return 0;
}