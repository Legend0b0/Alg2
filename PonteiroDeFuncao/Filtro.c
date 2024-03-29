#include <stdio.h>

int filtro_par(int x)
  {
  return(x % 2 == 0);
  }

int filtro_impar(int x)
  {
  return(x % 2 != 0);
  }

float media(int v[], int size, int (*pf)())
  {
  float media = 0;
  int n = size;

  for(int i = 0; i < size; i++)
    {
    if((*pf)(v[i]))
      {
      media += v[i];
      }
    else
      {
      n--;
      }
    }

  return((n != 0) ? media/n : 0);
  }

int
main()
  {
  int n;
  int (*pf)();

  puts("Entre com o tamanho do vetor");
  scanf("%d", &n);
  
  int v[n];

  puts("Preencha o vetor");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  pf = filtro_par;
  printf("Media dos pares: %.2f\n", media(v, n, pf));

  pf = filtro_impar;
  printf("Media dos impares: %.2f\n", media(v, n, pf));

  return(0);
  }
