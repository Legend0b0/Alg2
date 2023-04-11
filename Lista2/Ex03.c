#include <stdio.h>
#include <math.h>

struct Ponto
  {
  double x;
  double y;
  };

int 
main()
  {
  struct Ponto pontos[2];
  double r;

  //puts("Entre com o 'x' e 'y' do ponto 1:");
  scanf("%lf %lf", &pontos[0].x, &pontos[0].y);

  //puts("Entre com o 'x' e 'y' do ponto 2:");
  scanf("%lf %lf", &pontos[1].x, &pontos[1].y);

  r = sqrt(pow((pontos[1].x - pontos[0].x), 2) + pow((pontos[1].y - pontos[0].y), 2));

  printf("%.2lf\n", r);

  return 0;
  }
