#include <stdio.h>
#include <stdlib.h>

struct __fracao
  {
  int numerador;
  int denominador;
  };

void simplificar_fracao (struct __fracao *fracao)
  {
  int n;

  if(fracao->numerador > fracao->denominador)
    {
    n = fracao->denominador;
    }
  else
    {
    n = fracao->numerador;
    }

  if(((fracao->numerador % n) == 0) && ((fracao->denominador % n) == 0))
    {
    fracao->numerador /= n;
    fracao->denominador /= n;
    
    return;
    }
  
  for(int i = n/2; i > 1; i--)
    {
    if(((fracao->numerador % i) == 0) && ((fracao->denominador % i) == 0))
      {
      fracao->numerador /= i;
      fracao->denominador /= i;

      return; 
      }
    }
  }

int
main()
  {
  struct __fracao fracao;

 // puts("Entre com o numerador e o denominador");
  scanf("%d %d", &fracao.numerador, &fracao.denominador);
  
  simplificar_fracao(&fracao);

  printf("%d/%d\n", fracao.numerador, fracao.denominador);

  return 0;
  }
