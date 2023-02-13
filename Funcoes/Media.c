#include <stdio.h>

float media(float a, float b)
	{
	return (a + b) / 2.0;
	}

int
main()
	{
	float x1, x2, r;

	puts("Insira dois valores");
	scanf("%f %f", &x1, &x2);

	printf("Media: %0.2f\n", media(x1, x2));

	return 0;
	}
