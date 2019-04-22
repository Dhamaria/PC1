#include <stdio.h>
#define max 1000

int main() {
    char P[max], T[max];
    int i=0,j=0, flag = 0 ; //indicar se passou lá ou não. 

    scanf("%s %s",T,P);
    
    do {
        if (T[i] == P[0]) {
            j = 0;
            do {
                if (T[i+j] != P[j]){
                   flag = 1; 
                }
                
                j++;
            } while (P[j] != '\0');  
            
            if (flag == 0){
                printf("%d ", i);
            }
            flag = 0;
        }
     i++;   
    } while (T[i] != '\0');
    
    return 0;
}
