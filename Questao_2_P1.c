#include <stdio.h>

int main() {
    int n,i,vetor[1000],cont=0;

    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for ( i = 0; i < n; i++) {
        for ( int j = 0; j < n; j++) {
           if (vetor[i] == vetor[j])
           {
               cont++;
           }
            
        }   
    }
 
    if (cont > n){
        printf("Nao\n");
    }else{
        printf("Sim\n");
    }
    
    return 0;
}
