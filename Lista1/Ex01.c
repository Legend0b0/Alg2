#include <stdio.h>

void par_impar(int a)
	{
	if((a % 2) == 0)
		{
		puts("Par");
		}
	else
		{
		puts("Impar");
		}
	}

int
main()
	{
	int x;

	while(1 == 1)
		{
		puts("Entre com um numero");
		scanf("%d", &x);
	
		if(x < 0)
			{
			break;
			}

			par_impar(x);
		}

	return(0);
	}
