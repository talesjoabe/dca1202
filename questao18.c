#include <stdio.h>

// QUESTAO 18

void somarvetor(int v1[], int v2[], int soma[], int n){
    for(int i=0; i<n; i++){
        soma[i] = v1[i]+v2[i];
    }
}

int main()
{
    int n;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);

    int v1[n], v2[n], soma[n];

    printf("Informe os elementos do primeiro vetor: ");

    for(int i=0; i<n;i++){
        scanf("%d", &v1[i]);
    }

    printf("Informe os elementos do segundo vetor: ");

    for(int i=0; i<n;i++){
        scanf("%d", &v2[i]);
    }
    somarvetor(v1, v2, soma, n);

    printf("Soma: ");

    for(int i=0; i<n;i++){
        printf("%d ", soma[i]);
    }
    printf("\n");
    return 0;
}
