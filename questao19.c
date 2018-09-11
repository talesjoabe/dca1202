#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// QUESTAO 19

void mult_matriz(int **A, int **B, int **C, int nl_A, int nc_A, int nc_B){
    int aux=0;
    // TRABALHANDO COM A MATRIZ A
    A= (int**)malloc(nl_A*nc_A*sizeof(int*));
    A[0] = (int*)malloc(nc_A*sizeof(int));

    for(int i=1; i<nl_A; i++){
         A[i]= A[i-1]+ nc_A;
    }

    printf("Informe os valores da matriz A: ");

     for(int i=0; i<nl_A;i++){
         for(int j=0; j<nc_A; j++){
             scanf("%d", &(A[i][j]));
         }
     }


     // TRABALHANDO COM A MATRIZ B

    B= (int**)malloc(nc_A*nc_B*sizeof(int*));
    B[0] = (int*)malloc(nc_B*sizeof(int));


    for(int i=1; i<nc_A; i++){
         B[i]= B[i-1]+ nc_B;
    }

    printf("Informe os valores da matriz B: ");

     for(int i=0; i<nc_A;i++){
         for(int j=0; j<nc_B; j++){
             scanf("%d", &(B[i][j]));
         }
     }

     // trabalhando com a matriz C

    C= (int**)malloc(nl_A*nc_B*sizeof(int*));
    C[0] = (int*)malloc(nc_B*sizeof(int));

    for(int i=1; i<nl_A; i++){
         C[i]= C[i-1]+ nc_B;
    }

    for(int i=0; i<nl_A; i++){
        for(int j=0; j<nc_B; j++){
            for(int k=0; k<nc_A;k++){
                aux = (A[i][k]*B[k][j])+aux;
            }
            C[i][j] = aux;
            aux=0;
        }
    }

    for(int i=0; i<nc_B; i++){
        for(int j=0; j<nl_A; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **A, **B, **C, nl_A, nc_A, nc_B;

    printf("Informe a quantidade de linhas de A: ");
    scanf("%d", &nl_A);
    printf("Informe a quantidade de colunas de A: ");
    scanf("%d", &nc_A);
    printf("Informe a quantidade de colunas de B: ");
    scanf("%d", &nc_B);

    mult_matriz(A,B,C, nl_A, nc_A, nc_B);

    return 0;
}

