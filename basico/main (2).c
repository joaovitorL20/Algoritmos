/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int base, altura;
    float area;
    
    printf("Valor do lado da base do triangulo \n");
    scanf("%d", &base);
    
    printf("Valor da altura do triangulo \n");
    scanf("%d", &altura);
    
    
    area = (float) base * altura / 2;
    
    printf("A base do triangulo %.2f" , area  );
    
    
    
    return 0;
}
