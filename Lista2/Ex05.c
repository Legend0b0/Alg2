#include <stdio.h>
#include <string.h>

struct Livro 
  {
  char titulo[100];
  char autor[100];
  int ano;
  };

void scan_livro (struct Livro livros[], int n)
  {
  for(int i = 0; i < n; i++)
    {
    scanf(" %[^\n]", livros[i].titulo);
    scanf(" %s", livros[i].autor);
    scanf(" %d", &livros[i].ano);
    }
  }

void print_livro (struct Livro livros[], int n)
  {
  for(int i = 0; i < n; i++)
    {
    printf("%s - ", livros[i].titulo);
    printf("%s - ", livros[i].autor);
    printf("%d\n", livros[i].ano);
    }
  }

void ordena_livro (struct Livro livros[], int n)
  {
  struct Livro tmp;

  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n-1; j++)
      {
      if((strcmp(livros[j].titulo, livros[j+1].titulo)) > 0)
        {
        tmp = livros[j];
        livros[j] = livros[j+1];
        livros[j+1] = tmp;
        }
      }
    }
  }

int
main()
  {
  int n;

  puts("Entre com 'n':");
  scanf("%d", &n);

  struct Livro livros[n];

  scan_livro(livros, n);
  ordena_livro(livros, n);
  print_livro(livros, n);

  return (0);
  }
