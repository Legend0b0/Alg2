#include <stdio.h>

int imprimeMaior(float *v)
	{
  int count = 0;
	float media = 0;

	for(int i = 0; i < 20; i++)
		{
		media += v[i];
		}
	media /= 20.0;

	//puts("Acima da media:");

	for(int i = 0; i < 20; i++)
		{
		if(v[i] > media)
			{
      count++;
			}
		}

	return(count);
	}

int
main()
	{
	float v[20];

	//puts("Digite os 20 numeros:");
	
	for(int i = 0; i < 20; i++)
		{
		scanf("%f", &v[i]);
		}

	printf("%d\n", imprimeMaior(v));

	return(0);
	}
