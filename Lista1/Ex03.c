#include <stdio.h>

int countdigitos(int N)
	{
	int count = 1;

	for(int i = N; i > 9;)
		{
		i /= 10;
		count++;
		}

	return count;
	}

int 
main()
	{
	int N;
	
	//puts("Entre com um numero inteiro:");
	scanf("%d", &N);

	//printf("Esse numero possi:);
  printf("%d\n", countdigitos(N));
  //printf("digitos\n");

	return(0);
	}
