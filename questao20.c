#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gc.h"
#include <assert.h>

int main()
{
    int *x;
    int ne, i;
    ne = 10;
    GC_init();
    x = (int*) GC_malloc(ne*sizeof(int));
    for(i = 0; i<ne; i++){
        x[i] = 2*i;
        printf("%d ", x[i]);
    }
    printf("Sempre que se desenvolve ou cria-se algo, é designado ao objeto o endereçamento de memória ao qual ele se situa, assim como um");
    printf("bloco de memória para o objeto.");
    printf("Em C, é de responsabilidade do usuário a alocação e liberação de memória para objetos ou demais variáveis que estão sendo utilizadas,");
    printf("esse processo é realizado a partir do uso de funções como a função malloc() e a função free() que auxiliam a não acumulação de lixo");
    printf("na memória da máquina.");
    printf("Algumas frameworks ja fazem uso de coletores de lixo, os quais possuem a função de liberar e alocar os espaços de memória, ");
    printf("entretanto, com o uso da biblioteca libGC");
    return 0;
}
