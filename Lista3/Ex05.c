#include <stdio.h>

struct cadastro
  {
  char nome[100];
  float nota1;
  float nota2;
  float media;
  };

int
main()
  {
  struct cadastro Aluno[10];

  FILE *file_saida;

  file_saida = fopen("saida.txt", "w");

  //puts("Entre com os cadastros");
  for(int i = 0; i < 10; i++)
    {
    scanf(" %s", Aluno[i].nome);
    scanf(" %f", &Aluno[i].nota1);
    scanf(" %f", &Aluno[i].nota2);
    }

  for(int i = 0; i < 10; i++)
    {
    Aluno[i].media = ((Aluno[i].nota1 + Aluno[i].nota2) / 2.0);
    fprintf(file_saida, "%s\t%.2f\t%.2f\t%.2f\n", Aluno[i].nome, Aluno[i].nota1, Aluno[i].nota2, Aluno[i].media);
    }

  fclose(file_saida);

  return(0);
  }
