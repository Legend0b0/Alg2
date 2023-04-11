#include <stdio.h>

struct Retangulo 
  {
  float base;
  float altura;
  float area;
  float perimetro;
  };

int
main()
  {
  struct Retangulo retangulos[2];

  //puts("Digite as dimenções base e altura do retangulo 1:");
  scanf("%f %f", &retangulos[0].base, &retangulos[0].altura);

  //puts("Digite as dimenções base e altura do retangulo 2:");
  scanf("%f %f", &retangulos[1].base, &retangulos[1].altura);


  retangulos[0].area = retangulos[0].base * retangulos[0].altura; 
  retangulos[1].area = retangulos[1].base * retangulos[1].altura;

  retangulos[0].perimetro = 2 * (retangulos[0].base + retangulos[0].altura);
  retangulos[1].perimetro = 2 * (retangulos[1].base + retangulos[1].altura);

  printf("%.2f\t%.2f\n", retangulos[0].area, retangulos[0].perimetro);
  printf("%.2f\t%.2f\n", retangulos[1].area, retangulos[1].perimetro);

  return 0;
  }
