#include <stdio.h>

void par_impar(int a)
	{
	if((a % 2) == 0)
		{
		puts("PAR");
		}
	else
		{
		puts("IMPAR");
		}
	}

int
main()
	{
	int x;

	while(1 == 1)
		{
		//puts("Entre com um numero");
		scanf("%d", &x);
	
		if(x < 0)
			{
			break;
			}

		par_impar(x);
		}

	return(0);
	}
