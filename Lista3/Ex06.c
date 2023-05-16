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
  
  file_entrada = fopen("saida.txt", "r");

  for(int i = 0; fscanf(file_entrada, " %s %f %f %f", Aluno[i].nome, &Aluno[i].nota1, &Aluno[i].nota2, &Aluno[i].media) != EOF; i++)
    {
    printf("%s\t%.2f\t%.2f\t%.2f\n", Aluno[i].nome, Aluno[i].nota1, Aluno[i].nota2, Aluno[i].media);
    media += Aluno[i].media;
    }
  media /= 10;

  printf("Media Geral: %.2f\n", media);

  return(0);
  }
