#include <stdio.h>

struct Tempo__
  {
  int h;
  int m;
  int s;
  };

struct Tarefa__
  {
  struct Tempo__ tempo;
  char desc[50];
  };

int
main()
  {
  struct Tarefa__ tarefa[2];
  struct Tarefa__ tmp;

  for(int i = 0; i < 2; i++)
    {
    printf("Escreva a hora da tarefa %d:\n", i+1);
    scanf("%d %d %d", &tarefa[i].tempo.h, &tarefa[i].tempo.m, &tarefa[i].tempo.s);
    setbuf(stdin, NULL);
    
    printf("Escreva a descrição da tarefa %d:\n", i+1);
    fgets(tarefa[i].desc, 50, stdin);
    setbuf(stdin, NULL);
    }

  if(tarefa[0].tempo.h >= tarefa[1].tempo.h)
    {
    if(tarefa[0].tempo.h == tarefa[1].tempo.h)
      {
      if(tarefa[0].tempo.m >= tarefa[1].tempo.m)
        {
        if(tarefa[0].tempo.m == tarefa[1].tempo.m)
          {
          if(tarefa[0].tempo.s >= tarefa[1].tempo.s)
            {
            if(tarefa[0].tempo.s == tarefa[1].tempo.s)
              {
              printf("Acontecem ao mesmo tempo\n");
              printf("%d:%d:%d  -  %s", tarefa[0].tempo.h, tarefa[0].tempo.m, tarefa[0].tempo.s, tarefa[0].desc);
              printf("%d:%d:%d  -  %s", tarefa[1].tempo.h, tarefa[1].tempo.m, tarefa[1].tempo.s, tarefa[1].desc);

              return(0);
              }
            else
              {
              tmp = tarefa[0];
              tarefa[0] = tarefa[1];
              tarefa[1] = tmp;
              }
            }
          }
        else
          {
          tmp = tarefa[0];
          tarefa[0] = tarefa[1];
          tarefa[1] = tmp;
          }
        }
      }
    else
      {
      tmp = tarefa[0];
      tarefa[0] = tarefa[1];
      tarefa[1] = tmp;
      }
    }

  printf("%d:%d:%d  -  %s", tarefa[0].tempo.h, tarefa[0].tempo.m, tarefa[0].tempo.s, tarefa[0].desc);

  return(0);
  }
