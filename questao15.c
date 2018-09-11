#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int cmpfunc (float *a, float *b) {
   // função compare a ser lida pela função qsort
   // com isso, é possível definir a ordem de elementos a ser retornado
   // se o conteúdo do ponteiro do primeiro elemento for menor que o segundo, o primeiro eh menor
   // se for igual a 0, são equivalentes
    // se for maior que zero, o segundo é menor

   return (*(float*)a - *(float*)b );
}

void OrdemCresc(float *x, int n){
    int tempo[2]={0};

    x= (float*)malloc(n*sizeof(float)); // alocando um espaço de memória para a variável x

    if(x>0){ // verificando se foi alocado
        for(int i=0; i<n; i++){
            scanf("%f", x+i); // lendo os n numeros
        }

        //tempo inicial para comparação
        tempo[0] = clock();
        // usando a função q sort
        // declaracao da funcao:
        // void qsort(void *base, size_t nitems, size_t size, int (*compar)(int a, int b))
        // onde o primeiro parametro é um ponteiro com alguns elementos
        // o segundo é o tamanho que cada elemento ocupa
        // o terceiro é a função compare.
        qsort(x, n, sizeof(float), cmpfunc);
        printf("Os numeros depois de ser ordenado: ");

        for(int i=0;i<n;i++){
            printf("%f ", x[i]); // imprimindo cada elemento seguido de espaço (depois de ser ordenado)
        }

        printf("\n");

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

