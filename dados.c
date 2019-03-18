#include <stdio.h>

int main(){ //a probabilidade das faces de 4 dados. 
    int d1, d2, d3, d4;
    for(d1 = 1; d1 <= 6; d1++){
        for(d2 = 1; d2 <= 6; d2++){
            for(d3 = 1; d3 <= 6; d3++){
                for(d4 = 1; d4 <= 6; d4++){
                    printf("%d %d %d %d\n", d1, d2, d3, d4);
                }
            }
        }
    }
    return 0;
}