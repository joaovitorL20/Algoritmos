/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float peso, altura, imc;
   
   printf("Qual é o seu peso?");
   scanf("%f", &peso);
   
   printf("Qual é a sua altura?");
   scanf("%f", &altura);
   
   imc = peso / (altura * altura);
   
   printf("Seu IMC é %.2f", imc);
   
   
   return 0;
}
