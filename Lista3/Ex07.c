#include <stdio.h>

int
main()
  {
  char arq[50];
  FILE *file_entrada;

  //puts("Entre com o nome do arquivo");
  scanf(" %s", arq);

  file_entrada = fopen(arq, "r");

  char s[500];

  for(int i = 1; fgets(s, 500, file_entrada); i++)
    {
    printf("%d: %s", i, s);
    }
  
  return(0);
  }
