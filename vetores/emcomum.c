#include <stdio.h>

int main(){

    double vetor1[5], vetor2[5], result;
    int n,i,emcomum=0;

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

    for( i = 0; i <5; i++)
    {
        for( n = 0; n < 5; n++)
        {
            if (vetor1[i] == vetor2[n]) {
                emcomum =1;
                printf("Elemnto vetor vetor1[%d] é igual a elemento vetor2[%d]\n",i,n );
            }
            
        }
        
    }

    if (!emcomum) {
        printf("Não tem");
    }
    
    return 0;
}