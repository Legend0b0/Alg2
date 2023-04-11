#include <stdio.h>

struct Data__
  {
  int dia;
  int mes;
  int ano;
  };

int
main()
  {
  struct Data__ data[2];
  struct Data__ tmp;

 // puts("Escreva a data 1:");
  scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].ano);

 // puts("Escreva a data 2:");
  scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].ano);
  
  if(data[0].ano >= data[1].ano)
    {
    if(data[0].ano == data[1].ano)
      {
      if(data[0].mes >= data[1].mes)
        {
        if(data[0].mes == data[1].mes)
          {
          if(data[0].dia >= data[1].dia)
            {
            if(data[0].dia == data[1].dia)
              {
              //printf("Vao ocorrer ao mesmo tempo\n");

              return 0;
              }
            else
              {
              tmp = data[0];
              data[0] = data[1];
              data[1] = tmp;
              }
            }
          }
        else
          {
          tmp = data[0];
          data[0] = data[1];
          data[1] = tmp;
          }
        }
      }
     else
      {
      tmp = data[0];
      data[0] = data[1];
      data[1] = tmp;
      }
    }

  printf("%d/%d/%d\n",  data[0].dia, data[0].mes, data[0].ano);

  return(0);
  }
