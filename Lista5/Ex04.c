#include <stdio.h>

int vogal(char a)
  {
  return((a == 65) || (a == 69) || (a == 73) || (a == 79) || (a == 85) || (a == 97) || (a == 101) || (a == 105) || (a == 111) || (a == 117));
  }

int consoante(char a)
  {
  return((!vogal(a)) && (((a >= 97) && (a <= 122)) || ((a >= 65) && (a <= 90))));
  }

int conta_caracteres(char str[], int (*pf)(char))
  {
  int count = 0;
  
  for(int i = 0; str[i] != '\0'; i++)
    {
    if((*pf)(str[i]))
      {
      count++;
      }
    }

  return(count);
  }

int
main()
  {
  char str[500];
  int (*pf)(char);

  puts("Entre com uma string:");
  fgets(str, 500, stdin);

  pf = vogal;
  printf("Vogais: %d\n", conta_caracteres(str, pf));

  pf = consoante;
  printf("Consoantes: %d\n", conta_caracteres(str, pf));

  return(0);
  }
