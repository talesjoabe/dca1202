#include <stdio.h>

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  // 20
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b) */
  //29.0
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  /* (c) */
  //p
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d) */
  //e
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e) */
  //P
  p3 = nome;
  printf("%c \n", *p3);

  /* (f) */
  // e
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g) */
  //t
  p3--;
  printf("%c \n", *p3);

  /* (h) */
  // 31
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */
  // 45
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */
  // 27
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */
  // 31
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  //45
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */
  //27
  p5++;
  printf("%d \n", *p5);

  return(0);
}
