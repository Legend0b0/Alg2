#include <stdio.h>

int
main()
  {
  FILE *ptarq;

  ptarq = fopen("Saida.txt", "w");

  fprintf(ptarq, "oque eu quiser\n");

  fclose(ptarq);

  return 0;
  }
