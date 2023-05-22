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
  float media = 0;
  struct cadastro Aluno[10];
  FILE *file_entrada;
  
  file_entrada = fopen("entrada.txt", "r");

  for(int i = 0; fscanf(file_entrada, " %s %f %f %f", Aluno[i].nome, &Aluno[i].nota1, &Aluno[i].nota2, &Aluno[i].media) != EOF; i++)
    {
    printf("%s\t%.2f\t%.2f\t%.2f\n", Aluno[i].nome, Aluno[i].nota1, Aluno[i].nota2, Aluno[i].media);
    media += Aluno[i].nota1;
    media += Aluno[i].nota2;
    }
  media /= 20.0;

  printf("%.2f\n", media);

  return(0);
  }
