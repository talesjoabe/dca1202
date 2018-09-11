#include <stdio.h>

// Assim como um ponteiro normal aponta para uma posição na memoria em que uma variavel
// está. Um ponteiro para função permite acessar funções através de ponteiros. Pode-se
// declarar este tipo de ponteiro com a seguinte sintaxe:
// TIPO (*f)(parametros);
// Por exemplo, eu quero criar um ponteiro que aponte para minha função Aoquadrado.

int Aoquadrado(int base){
    return base*base;
}

int (*f)(int base);

int main()
{
    int num=2, quadrado;
    f= Aoquadrado;
    quadrado = (*f)(num);
    printf("%d\n", quadrado);

    return 0;
}
