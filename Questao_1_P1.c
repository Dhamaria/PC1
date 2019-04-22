#include <stdio.h>

int int main() {
  int n,i,cont,c=0;

  scanf("%d",&n);

  for (i = 1; i < n; i++) {
    if (n%i == 0) { //primo
      cont++
    }
    if (cont <= 2) {
      do {
        c = n/i;
      } while(c == 0);
    }
  }
  return 0;
}

/*#include<stdio.h>

int NextPrimo(int atualPrimo) {
    int flag = 0;
    int counter = 0;
    int nextPrimo = atualPrimo + 1;

    do {
        for(int i = 2; i <= nextPrimo/2; i++) {
            if(nextPrimo % i == 0) {
                counter++;
                break;
            }
        }

        if(counter == 0) {
            flag = 1;
        } else {
            nextPrimo++;
        }

        counter = 0;
    } while(flag == 0);

    return nextPrimo;
}

int main(){
    int value = 0;
    int primo = NextPrimo(1);
    int indicePrimo = 0;

    scanf("%d", &value);

    do {
        if(value % primo == 0) {
            do {
                value = value / primo;
                indicePrimo++;
            } while(value % primo == 0);
        }
        printf("%d ˆ %d\n", primo, indicePrimo);
        primo = NextPrimo(primo);
        indicePrimo = 0;
    } while(value >= primo);

    return 0;
}
*/
