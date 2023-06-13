#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz(int n)
  {
  int** matriz = (int**) malloc(n * sizeof(int*));
  
  for(int i = 0; i < n; i++) 
    {
    matriz[i] = (int*) malloc(n * sizeof(int));
    }
  
  return matriz;
  }

int diagonal_principal(int i, int j, int n)
  {
  return(i == j);
  }

int diagonal_secundaria(int i, int j, int n)
  {
  return((abs(i - j)) == (n - 1));
  }

int maior_diagonal(int** matriz, int n, int (*diagonal)(int, int, int))
  {
  int maior = 0;

  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      if((*diagonal)( i, j, n))
        {
        if(matriz[i][j] > maior)
          {
          maior = matriz[i][j];
          }
        }
      }
    }
  return maior;
  }

int
main()
  {
  int n;
  int (*ptf)();

  scanf("%d", &n);

  int **m = aloca_matriz(n);

  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      scanf("%d", &m[i][j]);
      }
    }

  ptf = diagonal_principal;
  printf("%d ", maior_diagonal( m, n, ptf));

  ptf = diagonal_secundaria;
  printf("%d\n", maior_diagonal( m, n, ptf));

  return(0);
  }
