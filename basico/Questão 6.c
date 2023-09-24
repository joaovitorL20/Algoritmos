/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 float dinheiro_total, quantidade_bombons, valor_bombom;
 
 valor_bombom = 2;
 
 printf("Quanto de dinheiro você tem? \n");
 scanf("%f", &dinheiro_total);
 
 printf("Quantos bombons você quer comprar? \n");
 scanf("%f", &quantidade_bombons);
 
 
 quantidade_bombons = dinheiro_total / valor_bombom;
 
printf("O total de bombons que você pode comprar é %2.f\n", quantidade_bombons);
    return 0;
}
