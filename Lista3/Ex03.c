#include <stdio.h>
#include <string.h>

int
main()
  {
  FILE *file_entrada, *file_saida;

  file_entrada = fopen("entrada.txt", "r");
  file_saida = fopen("saida.txt", "w");

  if(file_saida == NULL)
    {
    //puts("Arquivo entrada.txt nao encontrado");
    fclose(file_entrada);
    fclose(file_saida);
    return(0);
    }

  int countL = 0, countC = 1, bol;
  char str[100], tmp;

  while(fgets(str, 100, file_entrada))
    {
    bol = 0;

    if(str[0] != '\0')
      {
      for(int i = 0; str[i] != '\0'; i++)
        {
        if((str[i] != ' ') && (str[i] != '\n') && (str[i] != '\t'))
          {
          bol = 1;
          break;
          }
        }
      }

    if(bol == 1)
      {
      countL++;

      if(countL == 1)
        {
        for(int i = 0; str[i] != '\0'; i++)
          {
          if(((str[i] == ' ') || (str[i] == '\t')) && (i != 0))
            {
            countC++;
            }

          if(((str[i] == '\n') && ((tmp == ' ') || (tmp == '\t'))) || (((str[i] == ' ') || (str[i] == '\t')) && ((tmp == ' ') || (tmp == '\t'))))
            {
            countC--;
            }

          tmp = str[i];
          }
        }
      }
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

  fclose(file_entrada);
  fclose(file_saida);

  return(0);
  } 
