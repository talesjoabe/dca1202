#include <stdio.h>
#include <time.h>

void OrdemCresc(float *x, int n){
    int tempo[2]={0};
    float aux;
    x= (float*)malloc(n*sizeof(float));

    if(x>0){ // verificando se foi alocado
        for(int i=0; i<n; i++){
            scanf("%f", x+i); // lendo os n numeros
        }

        tempo[0] = clock();

        for(int i=0; i<(n-1);i++){
            for(int j=i; j<n;j++){
                if(x[i]>x[j]){
                    aux= x[i];
                    x[i]= x[j];
                    x[j]= aux;
                }
            }
        }

        printf("Os numeros depois de serem ordenados: ");
        for(int i=0;i<n;i++){
            printf("%f ", x[i]);
        }

        free(x);

        //A partir daqui podemos ter o tempo de execução medido
        tempo[1] = clock();

        double Tempo = (tempo[1] - tempo[0]) * 1000.0 / CLOCKS_PER_SEC;
        printf("\nTempo gasto: %g ms. \n", Tempo);
        getchar();
    }

    else{
        printf("Nao foi alocado!");
    }
}

int main()
{
    int n;
    float *x;

    printf("Informe a quantidade de valores a ser ordenado: \n");
    scanf("%d", &n);

    OrdemCresc(x, n);

    return 0;
}
