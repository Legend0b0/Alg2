#include <stdio.h>

float Adicao(float a, float b)
  {
  return(a+b);
  }

float Subtracao(float a, float b)
  {
  return(a-b);
  }

float Multiplicacao(float a, float b)
  {
  return(a*b);
  }

float Divisao(float a, float b)
  {
  return(a/b);
  }

int
main()  
  {
  float (*pf[4])(float a, float b);

  pf[0] = Adicao;
  pf[1] = Subtracao;
  pf[2] = Multiplicacao;
  pf[3] = Divisao;

  int op;
  float a, b;

  scanf("%f %d %f", &a, &op, &b);

  printf("Resultado: %.2f\n", pf[op](a, b));

  return(0);
  }
