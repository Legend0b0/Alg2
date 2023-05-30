#include <stdio.h>
#include "funcoes.h"

int
main()
  {
  int x1, x2;
  
  puts("Entre com 2 numeros");
  scanf("%d %d", &x1, &x2);

  printf("%.2f\n", calcularMedia(x1, x2));
  return(0);
  }
