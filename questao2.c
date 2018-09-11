#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;


    printf("%d \n", p == &i);
    printf("%d \n", *p - *q);
    printf("%d \n", **&p);
    printf("%d \n", 3 - *p/(*q) + 7);

    /*/
    Determine o valor das seguintes expressões:

    a) p == &i;
    Como p está armazenando o endereço de memória da variável i e &i é o endereço de memória de i, a expressão
    resulta em verdadeiro. Logo, o seu valor é 1.

    b) *p - *q;
    *p é o conteúdo armazenado no endereço de i (3). *q é o conteúdo armazenado no endereço de j (5).
    Logo, o seu valor é (3-5) = -2.

    c) **&p;
    sabendo que &p é o endereço de memória de p. *&p é o conteúdo armazenado no endereço de memória de p, ou seja,
    o enderenço de i. Logo, **&p será o conteúdo armazenado no endereço de memória de i. Portanto, o seu valor é
    3.

    d) 3 - *p/(*q) + 7;
    Como visto antes, *p é o conteúdo armazenado no endereço de i (3). E *q é o conteúdo armazenado no endereço de
    i (5). Logo, 3 - (3/5) + 7 é (3 - 0 + 7) = 10.

    /*/
    return 0;
}
