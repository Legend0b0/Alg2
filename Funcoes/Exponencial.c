#include <stdio.h>

int elevado(int x, int n)
	{
	int r = 1;

	for(int i = 0; i < n; i++)
		{
		r *= x;
		}

	return(r);
	}


int
main()
	{
	int x, n;
	int k;
	char nome[100];
	puts("Digite um numero 'k' para quantas propriedades quer fazer:");
	scanf("%d", &k);

	for(int i = 0; i < k; i++)
		{
		puts("Digite um numero 'x' para a base e um 'n' para o exponente:");
		scanf("%d %d", &x, &n);
		
		printf("Resultado: %d\n", elevado(x, n));
		}

	return(0);
	}
