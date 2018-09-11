#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// QUESTAO 16
// Quanto ao tempo, não houve mta diferença em relação a questão 15

float cmpfunc (float *a, float *b) {
   // função compare a ser lida pela função qsort
   // com isso, é possível definir a ordem de elementos a ser retornado
   // se o conteúdo do ponteiro do primeiro elemento for menor que o segundo, o primeiro eh menor
   // se for igual a 0, são equivalentes
    // se for maior que zero, o segundo é menor
    return ( *a - *b );
}

void OrdemCresc(float *x,int tamanho, int n, float (*cmp)(float *a, float *b)){
    int aux, tempo[2]={0};

    x= (float*)malloc(n*sizeof(float));

    printf("Informe a quantidade de valores a ser ordenado: \n");
    scanf("%d", &n);

    printf("Informe os numeros a ser ordenado: ");

    tempo[0] = clock();

    for(int i=0; i<n; i++){
        scanf("%f", (x+i)); // lendo os n numeros
    }

    for(int i=0; i<(n-1);i++){
        for(int j=i; j<n;j++){
            if(cmp(&x[i],&x[j])>0){
                aux=x[i];
                x[i]= x[j];
                x[j]= aux;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%f ", x[i]); // imprimindo cada elemento seguido de espaço (depois de ser ordenado)
    }
    free(x);

    //A partir daqui podemos ter o tempo de execução medido
    tempo[1] = clock();

    double Tempo = (tempo[1] - tempo[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTempo gasto: %g ms. \n", Tempo);
    getchar();
}

int main()
{
    int n;
    float *x;

    OrdemCresc(x, n, sizeof(float), cmpfunc);

    return 0;
}
