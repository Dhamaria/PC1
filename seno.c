#include <stdio.h>

const int MAX=5;

int main(){ 
    double x;
    int i;
    scanf("%lf",&x);
    double soma= 0;
    int impar =1;
    double sinal =1;
    double potencia = x;
    double fatorial = 1;
    for(i=0; i<MAX; i++){
        soma = sinal*potencia/fatorial;
        printf("%lf\n", soma);
        sinal = -sinal;
        potencia = potencia * x * x ;
        fatorial = fatorial * (impar+1) * (impar+2);
        impar+=2;
    }
    printf("sin (%lf) = %lf\n", x, soma);
    return 0;
}