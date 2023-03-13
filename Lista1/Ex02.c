#include <stdio.h>

int fatorial(int N)
	{
	int r = 1;

	for(int i = N; i > 0; i--)
		{
		r *= i;
		}

	return r;
	}

int
main()
	{
	int N;

	//puts("Entre com um numero 'N'");
	scanf("%d", &N);

  //puts("O fatorial de 'N' é:");
  printf("%d\n", fatorial(N));

	return(0);
	}
