/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int cigarros_dias, cigarros_anos, dias_perdidos, minutos_perdidos;
 
 printf("Cigarros fumados por dia:\n");
 scanf("%d", &cigarros_dias);
 
 printf("Anos sendo fumante:\n");
 scanf("%d", &cigarros_anos);
 
 minutos_perdidos = cigarros_dias * cigarros_anos * 365 * 10;
 dias_perdidos = minutos_perdidos / 1440;
 
 printf("Você perdeu um total de: %2.d dias\n");
 
    return 0;
}
