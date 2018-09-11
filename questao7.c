#include <stdio.h>

int main()
{
    // *(pulo + 2) é a expressao que referencia o terceiro valor do vetor. Neste caso: 3
    int pulo[3]= {1,2,3};
    int *p;
    p= pulo;

    printf("Terceiro elemento do vetor: %d\n", *(pulo + 2));

    return 0;
}
