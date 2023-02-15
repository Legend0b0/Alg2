#include <stdio.h>

int imprimeMaior(float *v)
	{
	float media = 0;

	for(int i = 0; i < 20; i++)
		{
		media += v[i];
		}
	media /= 20.0;

	puts("Acima da media:");

	for(int i = 0; i < 20; i++)
		{
		if(v[i] > media)
			{
			printf("%0.2f   ", v[i]);
			}
		}
	printf("\n");

	return(0);
	}

int
main()
	{
	float v[20];

	puts("Digite os 20 numeros:");
	
	for(int i = 0; i < 20; i++)
		{
		scanf("%f", &v[i]);
		}

	imprimeMaior(v);

	return(0);
	}
