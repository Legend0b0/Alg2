#include <stdio.h>

float Adicao(float x, float y)
  {
  return(x+y);
  }

float Subtracao(float x, float y)
  {
  return(x-y);
  }

float Multiplicacao(float x, float y)
  {
  return(x*y);
  }

float Divisao(float x, float y)
  {
  return(x/y);
  }

int
main()  
  {
  float (*pf[4])(float x, float y);

  pf[0] = Adicao;
  pf[1] = Subtracao;
  pf[2] = Multiplicacao;
  pf[3] = Divisao;

  float result = 0;
  char op[2];
  float a, b, c;
  int Op[2];

  puts("Entre com uma equacao de 3 numeros e 2 operacoes");
  scanf("%f %c %f %c %f", &a, &op[0], &b, &op[1], &c);

  for(int i = 0; i < 2; i++)
    {
    switch(op[i])
      { 
      case '+':
        {
        Op[i] = 0;
        break;
        }
      case '-':
        {
        Op[i] = 1;
        break;
        }
      case '*':
        {
        Op[i] = 2;
        }
        break;
      case '/':
        { 
        Op[i] = 3;
        break;
        }
      defalt:
        {
        puts("Caracter para operacao invalido!");
        return 0;
        }
      }
    }

  if((Op[1] == 2) || (Op[1] == 3))
    {
    if((Op[0] == 2) || (Op[0] == 3))
      {
      result += pf[Op[0]](a, b);
      result += pf[Op[1]](result, b);
      }
    result += pf[Op[1]](b, c);
    result += pf[Op[0]](a, result);
    }
  else
    {
    result += pf[Op[0]](a, b);
    result += pf[Op[1]](result, b);
    }

  printf("Resultado: %.2f\n", result);

  return(0);
  }
