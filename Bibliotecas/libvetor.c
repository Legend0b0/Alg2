#include <stdio.h>

void le_vetor(int v[], int n)
  {
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  }

void imprime_vetor(int v[], int n)
  {
  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");
  }
