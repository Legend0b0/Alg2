#include <stdio.h>
#include <string.h>

int
main()
  {
  char txt[5] = {".txt"};
  FILE *file_entrada;
  char nome[100];

  file_entrada = fopen("entrada.txt", "r");  

  while(fgets(nome, 100, file_entrada))
    {
    strcat(nome, txt);
    fopen(nome, "w");
    }

  return(0);
  }
