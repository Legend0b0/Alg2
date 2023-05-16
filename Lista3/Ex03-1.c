#include <stdio.h>

int
main()
  {
  FILE *file_entrada, *file_saida;

  file_entrada = fopen("entrada.txt", "r");
  file_saida = fopen("saida.txt", "w");

  if(file_saida == NULL)
    {
    puts("Arquivo entrada.txt nao encontrado");
    fclose(file_entrada);
    fclose(file_saida);
    return(0);
    }

  int countL = 1, countC = 1;
  char l, tmp;

  while(fscanf(file_entrada, "%c", &l) != EOF)
    {
    if((l == ' ') && (countL == 1))
      {
      countC++;
      }
    if(l == '\n')
      {
      countL++;
      }
    tmp = l;
    }

  if(tmp == '\n')
    {
    countL--;
    }

  fclose(file_entrada);

  file_entrada = fopen("entrada.txt", "r");

  int m[countL][countC];

  for(int i = 0; i < countL; i++)
    {
    for(int j = 0; j < countC; j++)
      {
      fscanf(file_entrada, "%d", &m[i][j]);
      }
    } 

  for(int j = 0; j < countC; j++)
    {
    for(int i = 0; i < countL; i++)
      {
      fprintf(file_saida, "%d", m[i][j]);
       if(i < countL-1)
         {
         fprintf(file_saida, " ");
         }
      }
    fprintf(file_saida, "\n");
    }

  return(0);
  } 
