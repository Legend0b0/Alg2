#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int n;
  int *v;

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);

  v = (int *) malloc(n * sizeof(int));

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  free(v);
  v = NULL;

  return(0);
  }
