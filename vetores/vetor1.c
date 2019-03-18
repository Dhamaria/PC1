#include <stdio.h>

int main(){
    //calcular produto escalar

    double vetor1[5], vetor2[5], result;
    int n,i;

    for( i = 0; i < 5; i++)
    {
        printf("Entre com valor na posicao %d para vetor 1:",i);
        scanf("%lf",&vetor1[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++)
    {
        printf("Entre com valor na posicao %d para vetor 2:",i);
        scanf("%lf",&vetor2[i]);
    }

    for( i = 0; i < 5; i++)
    {
        result = result + (vetor1[i] * vetor2[i]);

    }

    printf("O resultado é: %lf\n",result);
    
    
    
    return 0;
}