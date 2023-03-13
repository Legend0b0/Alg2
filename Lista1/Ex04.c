#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n)
	{
	int count = 0;
	for(int i = n; i > 0; i--)
		{
		if((n % i) == 0)
			{
			count++;
			}
		} 
	return(count == 2);
	}

int
main()
	{
	int n;

	while(1 == 1)
		{
		//puts("Entre com um numero:");
		scanf("%d", &n);

		if(n == -1)
			{
			break;
			}

    printf("%d\n\n", ehPrimo(n));
		}

	return 0;
	}
