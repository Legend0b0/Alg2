#include <stdio.h>

int
main()
  {
  char nome_origem[100];
  char nome_destino[100];

  scanf("%s", nome_origem);
  scanf("%s", nome_destino);

  FILE *file_orig;
  FILE *file_dest;

  file_orig = fopen(nome_origem, "r");
  file_dest = fopen(nome_destino, "w");

  char i;
  i = fgetc(file_orig);

  while(i != EOF)
    {
    if((i >= 97) && (i <= 122))
      {
      i -= 32;
      }
    fputc(i, file_dest);
    i = fgetc(file_orig);
    }

  fclose(file_orig);
  fclose(file_dest);

  return(0);
  }
