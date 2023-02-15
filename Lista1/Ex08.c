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
	int n;
	char operador;

	puts("Digite o tamanho do vetor:");
	scanf("%d", &n);
	setbuf(stdin, NULL);

	int v[n];

	puts("Entre com uma operacao '+', '-', '*', '/':");
	scanf("%c", &operador);

	printf("Escreva %d numeros:"\n, n);
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}

	printf("Resultado: %0.2f\n", operacao(operador, v, n));

	return(0);
	}
