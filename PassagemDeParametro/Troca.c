#include <stdio.h>

void troca(int *a, int *b)
  {
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;

  return;
  }

int
main()
  {
  int n;
  int a, b;

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);

  int v[n];

  puts("Preencha o vetor");
  
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n-1; j++)
      {
      if(v[j] > v[j+1])
        {
        troca(&v[j], &v[j+1]);
        }
      }
    }

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  return(0);
  }
