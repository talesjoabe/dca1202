#include <stdio.h>

int main()
{
    /*/
    TIPO x[4]; // mas x[0] está no endereço de memória 4092

    // se tipo é um char e ocupa 1 byte,
    // entao o endereço de memória de x[1] é 4093, x[2] é 4094, x[3] é 4095 e x[4] é 4096

    // se tipo é um int e ocupa 2 byte,
    // entao o endereço de memoria de x[1] é 4094, x[2] é 4096, x[3] é 4098 e x[4] é 4100

    // se tipo é um float e ocupa 4 bytes
    // entao o endereço de memória de x[1] é 4096, x[2] é 4100, x[3] é 4104, x[4] é 4108

    // se tipo é um double e ocupa 8 bytes
    // entao o endereço de memória de x[1] é 4100, x[2] é 4108, x[3] é 4116 e x[4] é 4124

    printf("x[0] = %X \n ", x);
    printf("x[1] = %X \n ", x+1);
    printf("x[1] = %X \n ", x+2);
    printf("x[1] = %X \n ", x+3);
    */
    return 0;
}
