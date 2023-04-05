#include <stdio.h>

int
main()
  {
  int i = 100;
  int *pti = &i;

  printf("Endereço de 'i': %p\n", i);
  printf("Endereço de 'pti': %p\n", pti);
  printf("Valor de 'i': %d\n", i);
  printf("Valor de 'pti': %d\n", *pti);
  printf("Valor de 'i' em 'pti': %d\n", pti);

  return 0;
  }
