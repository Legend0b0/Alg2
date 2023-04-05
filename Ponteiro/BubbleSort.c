#include <stdio.h>

void troca (int *a, int *b)
  {
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  }

void BubbleSort (int *v, int n)
  {
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
  }

int
main()
  {
  int n;

  puts("Digite o tamanho do vetor");
  scanf("%d", &n);

  int v[n];

  puts("Entre com os valores do vetor");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  BubbleSort(v, n);

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  return 0;
  }
