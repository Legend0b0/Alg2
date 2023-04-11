#include <stdio.h>
#include <string.h>

int
main()
  {
  FILE *file_orig1, *file_orig2, *file_dest;
 
  file_orig1 = fopen("Entrada1.txt", "r");
  file_orig2 = fopen("Entrada2.txt", "r");
  file_dest = fopen("Saida.txt", "w"); 

  if((file_orig1 == 0) || (file_orig2 == 0))
    {
    puts("Arquivos Inexistentes");
    return 1;
    }

  char i1[500];
  char i2[500];
  char *l1;
  char *l2;

  l1 = fgets(i1, sizeof(i1), file_orig1);
  l2 = fgets(i2, sizeof(i2), file_orig2);

  while((l1 != NULL) && (l2 != NULL))
    {
    if(strcmp(i1, i2) < 0)
      {
      fputs(i1, file_dest);
      l1 = fgets(i1, sizeof(i1), file_orig1);
      }
    if(strcmp(i1, i2) == 0)
      {
      fputs(i1, file_dest);
      l1 = fgets(i1, sizeof(i1), file_orig1);
      fputs(i2, file_dest);
      l2 = fgets(i2, sizeof(i2), file_orig2);
      }
    if(strcmp(i1, i2) > 0)
      {
      fputs(i2, file_dest);
      l2 = fgets(i2, sizeof(i2), file_orig2);
      }
    }

  if(l1 == NULL)
    {
    if(strcmp(i1, "\n") != 0)
      {
      fputs("\n", file_dest);
      }
    }
  else
    {
    if(strcmp(i2, "\n") != 0)
      {
      fputs("\n", file_dest);
      }
    }

  while(l1 != NULL)
    {
    fputs(i1, file_dest);
    l1 = fgets(i1, sizeof(i1), file_orig1);
    }

  while(l2 != NULL)
    {
    fputs(i2, file_dest);
    l2 = fgets(i2, sizeof(i2), file_orig2);
    }

  fclose(file_orig1);
  fclose(file_orig2);
  fclose(file_dest);

  return 0;
  }
