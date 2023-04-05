#include <stdio.h>

int negativos(float *vet, int n)
  {
  int count = 0;

  for(int i = 0; i < n; i++)
    {
    if(vet[i] < 0)
      {
      count++;
      }
    }

  return count;
  }

int
main()
  {
  int n;

  puts("Digite o tamanho do vetor:");
  scanf("%d", &n);

  float vet[n];

  puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%f", &vet[i]);
    }
  
  printf("Tem %d numeros negativos\n", negativos(vet, n));

  return 0;
  }
