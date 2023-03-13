#include <stdio.h>
#include <stdbool.h>

bool verificaprimo(int p)
  {
  int count = 0;

  for(int i = 1; i <= p; i++)
    {
    if((p % i) == 0)
      {
      count++;
      }
    }
  return(count == 2);
  }

int
main()
  {
  int n, soma = 0;

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);

  int p[n];

  puts("Preencha o vetor");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &p[i]);
    }

  for(int i = 0; i < n; i++)
    {
    if(verificaprimo(p[i]))
      {
      soma += p[i];
      }
    }

  printf("A soma dos primos eh: %d\n", soma);

  return(0);
  }
