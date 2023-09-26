/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float valor, desconto,valor_desconto;
   
    printf("Qual é o valor do produto? \n");
    scanf("%f", &valor);
    
    printf("Qual é a porcentagem do desconto? \n");
    scanf("%f", &desconto);
    
    valor_desconto = valor - (valor * desconto/100);
    
    printf("O valor com desconto é %.2f", valor_desconto);
    return 0;
}
