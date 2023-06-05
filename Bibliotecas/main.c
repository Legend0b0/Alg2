#include <stdio.h>
#include "libvetor.h"

int
main()
  {
  int n;

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);

  int v[n];

  le_vetor(v, n);
  imprime_vetor(v, n);

  return 0;
  }
