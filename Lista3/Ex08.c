#include <stdio.h>
#include <string.h>

int
main()
  {
  char txt[5] = {".txt"};
  FILE *file_entrada, *file_saida;
  char nome[100], nomearq[100];

  file_entrada = fopen("entrada.txt", "r");  
 
  while(fgets(nome, 100, file_entrada))
    {
    for(int i = 0; nome[i] != '\0'; i++)
      {
      if(nome[i] == '\n')
        {
        nome[i] = '\0';
        }
      }
    strcpy(nomearq, nome);
    strcat(nomearq, txt);
    file_saida = fopen(nomearq, "w");
    fputs(nome, file_saida);
    }

  return(0);
  }
