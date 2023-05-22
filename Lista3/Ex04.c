#include <stdio.h>

int
main()
  {
  FILE *file_entrada, *file_saida;

  file_entrada = fopen("entrada.txt", "r");
  file_saida = fopen("saida.txt", "w");

  if(file_entrada == NULL)
    {
    //puts("Arquivo 'entrada.txt' nao existe");
    fclose(file_entrada);
    fclose(file_saida);
    return(0);
    }

  char s[500];

  while(fgets(s, 500, file_entrada))
    {
    for(int i = 0; s[i] != '\n'; i++)
      {
      if((s[i] == 65) || (s[i] == 69) || (s[i] == 73) || (s[i] == 79) || (s[i] == 85) || (s[i] == 97) || (s[i] == 101) || (s[i] == 105) || (s[i] == 111) || (s[i] == 117))
        {
        s[i] = 42;
        }
      }
    fputs(s, file_saida);
    }

  fclose(file_entrada);
  fclose(file_saida);

  return(0);
  }
