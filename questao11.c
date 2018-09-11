#include <stdio.h>

// QUESTAO 11

int main()
{
    // Na maior parte, foi dentro da expectativa.
    // A única diferença foi em relação ao inteiro, isso porque na verdade
    // um inteiro ocupa 4 bytes, ao invés de 2.

    // declarando um vetor de tamanho 4 de caracter, inteiro, float e double
    char c[4]; int i[4]; float f[4]; double d[4];

    // percorrendo o vetor até a posição 4
    for(int j=0; j<5; j++){
    // imprimindo a posição do vetor e o local que o mesmo ocupa na memoria
    // enquanto caracter, enquanto inteiro, enquanto floar e enquanto double
    printf("Endereco de memoria da posicao %d do vetor \n Caracter: %X, Inteiro: %X, Float: %X, Double: %X\n", j, c+j, i+j, f+j,d+j);
    }

    // imprimindo o tamanho de bytes que cada tipo ocupa na memória
    // Tamanho:
    // 1.Char: 1
    // 2.Int: 4
    // 3.Float: 4
    // 4.Double: 5
    printf("Tamanho: \n 1.Char: %d \n 2.Int: %d \n 3.Float: %d \n 4.Double: %d \n", sizeof(char), sizeof(int), sizeof (float), sizeof (double));
    return 0;
}
