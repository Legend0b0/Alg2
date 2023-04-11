#include <stdio.h>

struct Data
  {
  int dia;
  int mes;
  int ano;
  };

void ler_data(struct Data datas[], int *n)
  {
  for(int i = 0; i < *n; i++)
    {
    //printf("Entre com a data %d\n", i+1);
    scanf("%d %d %d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }
  }

void print_data(struct Data datas[], int *n)
  {
  //puts("Datas ordenadas:");
  for(int i = 0; i < *n; i++)
    {
    printf("%.2d/%.2d/%.4d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
  }

int compara_data(struct Data *d1, struct Data *d2)
  {
  if(d1->ano >= d2->ano)
    {
    if(d1->ano == d2->ano)
      {
      if(d1->mes >= d2->mes)
        {
        if(d1->mes == d2->mes)
          {
          if(d1->dia >= d2->dia)
            {
            if(d1->dia == d2->dia)
              {
              return(0);
              }
            else
              {
              return(1);
              }
            }
          else
            {
            return(-1);
            }
          }
        else
          {
          return(1);
          }
        }
      else
        {
        return(-1);
        }
      }
    else
      {
      return(1);
      }
    }
  else
    {
    return(-1);
    }
  }

void bubble_sort_datas(struct Data datas[], int *n)
  {
  struct Data tmp;

  for(int i = 0; i < *n; i++)
    {
    for(int j = 0; j < *n-1; j++)
      {
      if(compara_data(&datas[j], &datas[j+1]) == 1)
        {
        tmp = datas[j];
        datas[j] = datas[j+1];
        datas[j+1] = tmp;
        }
      }
    }
  }

int
main()
  {
  int n;

  //puts("Entre com a quantidade de datas");
  scanf("%d", &n);

  struct Data datas[n];

  ler_data(datas, &n);

  bubble_sort_datas(datas, &n);

  print_data(datas, &n);

  return 0;
  }
