#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    /*
    Questao 3
    Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

    Etapas:
    1. Sabendo que p armazena o endereço de memória de i, então p = 4094;
    2. *p é o conteúdo armazenado no endereço de memória de i, então *p+2 = 5+2= 7;
    3. Se &p é o endereço de p (ou o endereço que está armazenado o endereço de i). *&p é o
    conteúdo que está armazenado no endereço de p, ou seja, o endereço de i. **&p é o endereço
    que está armazenado no endereço de i, ou seja, 5.
    4. Sabendo que *p é o conteúdo armazenado no endereço de i, ou seja, 5. 3*5 será 15.
    5. Descobrimos anteriormente que **&p é 5. Então **&p+4 será 5+4. Logo, 9.

    Assim, será impresso 4094 7 5 15 9.

    */
    return 0;
}
