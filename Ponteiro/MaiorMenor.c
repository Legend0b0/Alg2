#include <stdio.h>

void MaiorMenor(int vetor[], int tamanho, int *menor, int *maior)
  {
  *menor = vetor[0];
  *maior = vetor[0];

  for(int i = 1; i < tamanho; i++)
    {
    if(*menor > vetor[i])
      {
      *menor = vetor[i];
      }
    if(*maior < vetor[i])
      {
      *maior = vetor[i];
      }
    }
  }

int
main()
  {
  int n;
  int maior, menor;

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);

  int v[n];

  puts("Entre com os valores do vetor");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  
  MaiorMenor(v, n, &menor, &maior);

  printf("Maior: %d\nMenor: %d\n", maior, menor);

  return 0;
  }
