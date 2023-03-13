#include <stdio.h>

typedef struct
  {
  int numerador;
  int denominador;
  } fracao;

int
main()
  {
  fracao f1, f2, fr;

  puts("Escreva as fracoes");
  scanf("%d %d", &f1.numerador, &f1.denominador);
  scanf("%d %d", &f2.numerador, &f2.denominador);
  
  fr.numerador = f1.numerador * f2.numerador;
  fr.denominador = f1.denominador * f2.denominador;

  printf("Fr = %d/%d\n", fr.numerador, fr.denominador);

  return(0);
  }
