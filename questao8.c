#include <stdio.h>

int main()
{
    int mat[4]={1,2,3,4}, *p, x;

    // as expressões abaixo são as únicas válidas

    p = mat + 1;
    printf("p= %d\n", p);

    x = (*mat)++;
    printf("x= %d\n", x);

    return 0;
}
