/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;
  int peso1, peso2, peso3;
  
  printf("Nota 1 e seu peso:\n");
  scanf("%f %d", &nota1, &peso1);
  
  printf("Nota 2 e seu peso:\n");
  scanf("%f %d", &nota2, &peso2);
  
  printf("Nota 3 e seu peso:\n");
  scanf("%f %d", &nota3, &peso3);
  
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
  
  printf("Sua média ponderada é: %2.f\n", media);
    
    return 0;
}
