/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float valor_coxinha = 6;
  float valor_paodequeijo = 2;
  float valor_suco = 3;
  float valor_refrigerante = 5;
  float coxinha, paodequeijo, suco, refrigerante;
  
  printf("Quantas coxinhas você comeu? \n");
  scanf("%f", &coxinha);
  
  printf("Quantos pães de queijo você comeu? \n");
  scanf("%f", &paodequeijo);
  
  printf("Quantos sucos você bebeu? \n");
  scanf("%f", &suco);
  
  printf ("Quantos refrigerantes você tomou? \n");
  scanf ("%f", &refrigerante);
  
  
  float valor_total = (valor_coxinha * coxinha) + (valor_paodequeijo * paodequeijo) + (valor_suco * suco) + (valor_refrigerante + refrigerante);
  
  printf("O valor que você tem pagar é R$ %2.f\n", valor_total);
    return 0;
}
