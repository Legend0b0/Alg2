#include <stdio.h>

int
main()
  {
  FILE *file_orig1, *file_orig2, *file_dest;
 
  file_orig1 = fopen(Entrada1.txt, "r");
  file_orig2 = fopen(Entrada2.txt, "r");
  file_dest = fopen(Saida.txt, "w"); 

  if((fopen(Entrada1.txt, "r") == 0) || (fopen(Entrada2.txt, "r" == 0)))
    {
    puts("Arquivos Inexistentes");
    return 1;
    }

  char i[500];
  fgets(s, sizeof(s), file_orig1);

  while(s != EOF)
    {
    fputs(s, file_dest);
    fgets(s, sizeof(s), file_orig1);
    }

  fclose(file_dest);
  file_dest = fopen(Saida.txt, "a"); 


  fgets(s, sizeof(s), file_orig2);

  while(s != EOF)
    {

    }



  return 0;
  }
