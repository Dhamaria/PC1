#include <stdio.h>

int main(){

    int num,i,cont=0;

    scanf("%d",&num);

    for( i = 1; i < num; i++)
    {
        if((num % i) == 0){
            cont++;
        }
    }

    if (cont > 2) {
        printf("N e primo\n");
    } 
    if (cont < 2) {
        printf("É primo\n");
    }
    
    
    
    return 0;
}