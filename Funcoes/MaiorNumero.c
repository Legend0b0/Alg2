#include <stdio.h>

int maiorNumero(int a, int b)
	{
	if(a > b)
		{
		return(a);
		}
	if(b > a)
		{
		return(b);
		}
	}

int
main()
	{
	int a, b;

	puts("Entre com dois numeros:");
	scanf("%d %d", &a, &b);

	printf("O maior eh o: %d\n", maiorNumero(a, b));

	return(0);
	}
