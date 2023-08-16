#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int n)
  {
  return((int *) malloc(n * sizeof(int)));
  }

void le_vetor(int *v, int n)
  {
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  }

void imprime_vetor(int *v, int n)
  {
  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");
  }

int
main()
  {
  int n;

  scanf("%d", &n);
  
  int *v = cria_vetor(n);

  le_vetor(v, n);

  imprime_vetor(v, n);

  free(v);
  v = NULL;

  return(0);
  }
