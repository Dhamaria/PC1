#include <stdio.h>

int fat(int number){
    int fator = 1;
    if (number != 0){
        for (int i = 1; i <= number; i++){
            fator= fator * i;
        }
        return fator;
        
    } else{
        return 1;
    }     
}

int main () { 
    int n;
    float fator, euler = 0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        fator = fat(i);
        euler = euler + (1 / fator);
    }

    if (n == 0){
        euler = 1;
    }
    
    
    printf("%.2f\n", euler);
    return 0;
}
