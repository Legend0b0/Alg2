#include <stdio.h>

int
main()
  {
  int x, soma = 0;
  FILE *file_entrada, *file_saida;

  file_entrada = fopen("entrada.txt", "r");
  file_saida = fopen("saida.txt", "w");
 
  while(fscanf(file_entrada, "%d", &x) != EOF)
    {
    soma += x;
    }

  fprintf(file_saida, "%d", soma);

  fclose(file_entrada);
  fclose(file_saida);

  return(0);
  }
