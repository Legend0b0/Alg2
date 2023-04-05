#include <stdio.h>

int
main()
  {
  int n;

  scanf("%d", &n);

  int v[5];

  for(int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");

  return 0;
  }
