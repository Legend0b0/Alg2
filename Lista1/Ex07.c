#include <stdio.h>

int imprimeVetor(int *v, int n)
	{
	for(int i = 0; i < n; i++)
		{
		printf("%d  ", v[i]);
		}
	printf("\n");

	return(0);
	}

int
main()
	{
	int n;

	//puts("Digite quantos numeros ira usar:");
	scanf("%d", &n);

	int v[n];

	//printf("Entre com %d numeros:\n", n);
	for(int i = 0; i < n; i++)
		{
		scanf("%d", &v[i]);
		}

	imprimeVetor(v, n);

	return(0);
	}
