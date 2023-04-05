#include <stdio.h>

struct Aluno__
  {
  char nome[100];
  int matricula;;
  float nota;
  };

int
main()
  {
  int n;
  float media = 0;
  
  puts("Quantos alunos tem que lancar a nota:");
  scanf("%d", &n);
  setbuf(stdin, NULL);

  struct Aluno__ aluno[n];

  for(int i = 0; i < n; i++)
    {
    printf("Digite o nome do Aluno %d:\n", i+1);
    fgets(aluno[i].nome, 100, stdin);
    setbuf(stdin, NULL);

    printf("Digite a matricula do Aluno %d:\n", i+1);
    scanf("%d", &aluno[i].matricula);
    setbuf(stdin, NULL);

    printf("Digite a nota do Aluno %d:\n", i+1);
    scanf("%f", &aluno[i].nota);
    setbuf(stdin, NULL);
    }

  for(int i = 0; i < n; i++)
    {
    media += aluno[i].nota;
    }
  media /= n;

  printf("Media: %.2f\n", media);

  return 0;
  }
