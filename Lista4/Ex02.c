#include <stdio.h>
#include <stdlib.h>

int *interseccao(int v1[], int v2[], int n1, int n2, int *qtd)
  {
  int *v3;

  if(n1 > n2)
    {
    v3 = malloc(n2 * sizeof(int));
    }
  else
    {
    v3 = malloc(n1 * sizeof(int));
    }

  int bol;
  for(int i = 0; i < n1; i++)
    {
    bol = 1;
    for(int j = 0; j < n2; j++)
      {
      if(v1[i] == v2[j])
        {
        v3[*qtd] = v1[i];
        (*qtd)++;
        break;
        }
      }
    }

  v3 = realloc(v3, *qtd * sizeof(int));

  return(v3);
  }

int
main()
  {
  int n1, n2;

  puts("Entre com o tamanho de v1 e v2:");
  scanf("%d %d", &n1, &n2);

  int v1[n1], v2[n2];

  puts("Preencha o v1:");
  for(int i = 0; i < n1; i++)
    {
    scanf("%d", &v1[i]);
    }
  
  puts("Preencha o v2:");
  for(int i = 0; i < n2; i++)
    {
    scanf("%d", &v2[i]);
    } 

  int *v3;
  int qtd = 0;

  v3 = interseccao(v1, v2, n1, n2, &qtd);

  for(int i = 0; i < qtd; i++)
    {
    printf("%d ", v3[i]);
    }
  printf("\n");

  free(v3);
  v3 = NULL;

  return(0);
  }
