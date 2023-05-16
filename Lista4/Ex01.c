#include <stdio.h>
#include <stdlib.h>

int *uniao(int v1[], int v2[], int n1, int n2, int *qtd)
  {
  int *v3;

  v3 = malloc((n1 + n2) * sizeof(int));

  int bol;
  for(int i = 0; i < n1; i++)
    {
    bol = 1;
    for(int j = 0; j < *qtd; j++)
      {
      if(v1[i] == v3[j])
        {
        bol = 0;
        }
      }
    if(bol == 1)
      {
      v3[*qtd] = v1[i];
      (*qtd)++;
      }
    }

  for(int i = 0; i < n2; i++)
    {
    bol = 1;
    for(int j = 0; j < *qtd; j++)
      {
      if(v2[i] == v3[j])
        {
        bol = 0;
        }
      }
    if(bol == 1)
      {
      v3[*qtd] = v2[i];
      (*qtd)++;
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

  v3 = uniao(v1, v2, n1, n2, &qtd);

  for(int i = 0; i < qtd; i++)
    {
    printf("%d ", v3[i]);
    }
  printf("\n");

  free(v3);
  v3 = NULL;

  return(0);
  }
