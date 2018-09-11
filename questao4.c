#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=2;
    int *p, *q;
    q = *p;
    printf("%d \n", q);


    /*/
    As seguintes expressões são atribuições ilegais:
    1. p = i;
    2. i = (*&)j;
    3. q = *p;
    4. i = (*p)++ + *q;
    */

    return 0;
}

