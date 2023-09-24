/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float valor_produto, valor_desconto;
  
  printf("Qual é o valor do produto? \n");
  scanf("%f", &valor_produto);
  
  valor_desconto = valor_produto - (valor_produto * 0.05);

printf("O valor do produto com o desconto é %2.f reais", valor_desconto);
    return 0;
}
