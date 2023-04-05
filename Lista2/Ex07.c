#include <stdio.h>
#include <stdlib.h>

struct __fracao
  {
  int numerador;
  int denominador;
  };

void adicionar_fracao (struct __fracao fracao[], struct __fracao *result)
  {
  result->denominador = fracao[0].denominador * fracao[1].denominador;
  result->numerador = ((fracao[0].numerador * fracao[1].denominador) + (fracao[1].numerador * fracao[0].denominador));
  }

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
  struct __fracao fracao[2];
  struct __fracao result;

  puts("Entre com o numerador e o denominador da fracao 1");
  scanf("%d %d", &fracao[0].numerador, &fracao[0].denominador);
  
  puts("Entre com o numerador e o denominador da fracao 2");
  scanf("%d %d", &fracao[1].numerador, &fracao[1].denominador); 

  adicionar_fracao(fracao, &result);

  simplificar_fracao(&result);

  printf("%d/%d\n", result.numerador, result.denominador);

  return 0;
  }
