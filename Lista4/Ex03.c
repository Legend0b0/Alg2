#include <stdio.h>
#include <stdlib.h>

void preenche_vetor(int *v, int n)
  {
  puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  }

int
main()
  {
  int *v;
  int n;

  puts("Entre com o tamanho do vetor:");
  scanf("%d", &n);

  v = malloc(n * sizeof(int));

  preenche_vetor(v, n);

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  free(v);
  v = NULL;

  return(0);
  }
