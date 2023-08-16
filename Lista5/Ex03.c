#include <stdio.h>

int quadrado(int x)
  {
  return(x*x);
  }

int cubo(int x)
  {
  return(x*x*x);
  }

void atualiza_vetor(int v[], int n, int (*pf)(int))
  {
  for(int i = 0; i < n; i++)
    {
    v[i] = (*pf)(v[i]);
    }
  }

int
main()
  {
  int n;
  int (*pf)(int);

  //puts("Entre com o tamanho do vetor:");
  scanf("%d", &n);

  int v[n];

  //puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  if(v[0] < 0)
    {
    pf = quadrado;
    }
  else
    {
    pf = cubo;
    }

  atualiza_vetor(v, n, pf);

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  return(0);
  }
