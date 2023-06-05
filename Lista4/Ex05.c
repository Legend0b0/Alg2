#include <stdio.h>
#include <stdlib.h>

int conta_ocorrencias(int *v, int n, int k)
  {
  int count = 0;

  for(int i = 0; i < n; i++)
    {
    if(v[i] == k)
      {
      count++;
      }
    }
  return(count);
  }

int *remove_ocorrencias(int *v, int *n, int k)
  {
  int *v2;
  int qtd = 0;

  v2 = malloc(*n * sizeof(int));

  for(int i = 0; i < *n; i++)
    {
    if(v[i] != k)
      {
      v2[qtd] = v[i];
      qtd++;
      }
    }

  *n = qtd;

  v2 = realloc(v2, (*n) * sizeof(int));

  return(v2);
  }

int
main()
  {
  int n;
  int *v;
  int k;

  //puts("Entre com o tamanho do vetor:");
  scanf("%d", &n);

  //puts("Entre com um indice 'k':");
  scanf("%d", &k);

  v = malloc(n * sizeof(int));

  //puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  //printf("O indice se encontra %d" vezes\n", conta_ocorrencias(v, n, k));

  int *v2;
  int n2 = n;

  v2 = remove_ocorrencias(v, &n2, k);

  //puts("O vetor sem os algarismos indices eh:");
  for(int i = 0; i < n2; i++)
    {
    printf("%d ", v2[i]);
    }
  printf("\n");

  return(0);
  }
