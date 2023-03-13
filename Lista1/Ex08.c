#include <stdio.h>

float operacao(char operador, int *v, int n)
	{
	float r = v[0];
	
	switch(operador)
		{
		case '+':
			{
			for(int i = 1; i < n; i++)
				{
				r += v[i];
				}
			return(r);
			}

		case '-':
			{
			for(int i = 1; i < n; i++)
				{
				r -= v[i];
				}
			return(r);
			}

		case '*':
			{
			for(int i = 1; i < n; i++)
				{
				r *= v[i];
				}
			return(r);
			}

		case '/':
			{
			for(int i = 1; i < n; i++)
				{
				r /= v[i];
				}
			return(r);	
			}

		defalt:
		}
	return(0);
	}

int
main()
	{
	int n = 4;
	char operador;

  //puts("Entre com uma operacao '+', '-', '*', '/':");
	scanf("%c", &operador);

  //puts("Digite o tamanho do vetor:");
	scanf(" %d", &n);

	int v[n];

  //printf("Escreva %d numeros:"\n, n);
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}

	printf("%f\n", operacao(operador, v, n));

	return(0);
  }
