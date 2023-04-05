#include <stdio.h>

int
main()
  {
  FILE *ptOrigem, *ptDestino;
  char Msg[100];

  ptOrigem = fopen("Origem.txt", "r");
  ptDestino = fopen("Destino.txt", "w");

  if(ptOrigem != 0)
    {
    fscanf(ptOrigem, " %[^\n]", Msg);
    fprintf(ptDestino, " %[^\n]", Msg);
    }
  else
    {
    fprintf(stdout, "Arquivo Origem.txt nao existe\n");
    }

  fclose(ptOrigem);
  fclose(ptDestino);

  return 0;
  }
