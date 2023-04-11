#include <stdio.h>

int
main()
  {
  int n;
  int count = 0;

  puts("Entre com 'n'");
  scanf("%d", &n);

  int v[n];

  puts("Entre com o vetor");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  
  for(int i = n-1; i >= 0; i--)
    {
    count += v[i];
    }

  FILE *file_saida;
  file_saida = fopen("saida.txt", "w");

  if(file_saida == NULL)
    {
    puts("Sem permissao para abrir o arquivo");
    }

  fprintf(file_saida, "%d", count);

  fclose(file_saida);

  return 0;
  }
