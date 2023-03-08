#include <stdio.h>

struct __tempo 
  {
  int h;
  int m;
  int s;
  } tempo1, tempo2;

int
main()
  {
  puts("Entre com as horas");
  scanf("%d %d %d", &tempo1.h, &tempo1.m, &tempo1.s);

  tempo2 = tempo1;
  tempo2.s++;

  if(tempo2.s == 60)
    {
    tempo2.s = 0;
    tempo2.m++;
    }
  if(tempo2.m == 60)
    {
    tempo2.m = 0;
    tempo2.h++;
    }
  if(tempo2.h == 24)
    {
    tempo2.h = 00;
    tempo2.m = 00;
    tempo2.s = 00;
    }

  printf("%02d:%02d:%02d\n", tempo2.h, tempo2.m, tempo2.s);

  return 0;
  }
