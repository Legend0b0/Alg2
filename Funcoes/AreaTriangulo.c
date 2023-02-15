#include <stdio.h>

double areaTriangulo(double base, double altura)
	{
	return((base * altura) / 2);
	}

int
main()
	{
	int n;
	double b, a;

	puts("Entre com a quantidade de triangulos:");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		{
		puts("Entre com a base e altura do triangulo:");
		scanf("%lf %lf", &b, &a);

		printf("Area: %0.2lf\n\n", areaTriangulo(b, a));
		}

	return(0);
	}
