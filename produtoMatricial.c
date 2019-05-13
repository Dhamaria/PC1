#include <stdio.h>
#define max 100

void entrada(int n, int m, int k, int l,int matrixA[max][max], int matrixB[max][max]){
    int i, j,p,r;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&matrixA[i][j]);
        }
    }

     for(p = 0; p < k; p++){
        for(r = 0; r < l; r++){
            printf("B[%d][%d] = ",p,r);
            scanf("%d",&matrixB[p][r]);
        }
    }
}

int produto(int n, int m, int k, int l,int matrixA[max][max], int matrixB[max][max], int matrixC[max][max]){
    int i, j ,y,t;
    
    for(i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            matrixC[i][j] = 0;
            for (y = 0; y < k; y++){
                matrixC[i][j] += matrixA [i][y] * matrixB[y][j];
           }
            
        } 
    }

    for(i = 0; i < n; i++){
        printf("\n");
        for (j = 0; j < m; j++){
         printf("%3d",matrixC[i][j]);

        }
     } 

     printf("\n"); 

   return 1;
}


int main(){

   int n,m,k,l;
   int matrixA[max][max], matrixB[max][max];
   int matrixC[max][max];
   
    printf("Digite a dimensao das matrizes A: ");
    scanf(" %d %d", &n,&m);

    printf("Digite a dimensao das matrizes B: ");
    scanf(" %d %d", &k,&l);


    if(m == k){
        entrada(n,m,k,l,matrixA,matrixB);

        produto(n,m,k,l,matrixA,matrixB, matrixC);
    }

    return 0;
}
