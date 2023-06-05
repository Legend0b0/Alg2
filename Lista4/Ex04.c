#include <stdio.h>
#include <stdlib.h>

void preenche_vetor(int *v, int n)
  {
  //puts("Preencha o vetor:");
  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }
  }

int *obtemPares(int v[], int n, int *qtd)
  {
  int *vn;

  vn = malloc(n * sizeof(int));

  for(int i = 0; i < n; i++)
    {
    if(v[i] % 2 == 0)
      {
      vn[*qtd] = v[i];
      (*qtd)++;
      }
    }

  vn = realloc(vn, (*qtd) * sizeof(int)); 

  return(vn);
  }

int
main()
  {
  int *v;
  int n;

  //puts("Entre com o tamanho do vetor:");
  scanf("%d", &n);

  v = malloc(n * sizeof(int));

  preenche_vetor(v, n);

  int *vn;
  int qtd = 0;

  vn = obtemPares(v, n, &qtd);

  for(int i = 0; i < qtd; i++)
    {
    printf("%d ", vn[i]);
    }
  printf("\n");

  free(vn);
  vn = NULL;

  return(0);
  }
