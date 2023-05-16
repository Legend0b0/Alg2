#include <stdio.h>

int eh_negativo(int x)
  {
  return(x < 0);
  }

int eh_positivo(int x)
  {
  return(x > 0);
  }

int busca_elemento(int v[], int n, int (*pf)())
  {
  for(int i = 0; i < n; i++)
    {
    if((*pf)(v[i]))
      {
      return(i);
      }
    }
  return(-1);
  }

int
main()
  {
  int n, f;
  int (*pf[2])(int);

  puts("Entre com o tamanho do vetor:");
  scanf("%d", &n);

  int v[n];

  puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  puts("Entre com '0' se deseja o filtro negativo, ou '1' se deseja o filtro positivo:");
  scanf("%d", &f);
  
  pf[0] = eh_negativo;
  pf[1] = eh_positivo;

  printf("Indice: %d\n", busca_elemento(v, n, pf[f]));




  return(0);
  }
