#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <gc.h>

int main()
{
    clock_t t;
    int *x;
    int ne, i;
    ne=10;
    x = (int*) malloc(ne*sizeof(int));
    t = clock();
    for(i = 0; i<ne; i++){
        x[i] = 2*i;
        printf("%d ", x[i]);
    }
    free(x);
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",
            t,((float)t)/CLOCKS_PER_SEC);
    printf("\n");
    GC_init();
    x = (int*) GC_malloc(ne*sizeof(int));
    t = clock();
    for(i = 0; i<ne; i++){
        x[i] = 2*i;
        printf("%d ", x[i]);
    }
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",
            t,((float)t)/CLOCKS_PER_SEC);
    printf("\n Ao comparar o tempo entre o uso das funções de malloc() e free() e a função GC_malloc é possível comprovar a eficácia entre as funções.");
    printf("/n Por mais prática que a função GC_malloc seja, as funções malloc e free têm um melhor desempenho.");
    return 0;
}
