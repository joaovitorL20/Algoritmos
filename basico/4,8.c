/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, c, delta;
    
    printf("Qual é o valor de a? \n");
    scanf("%f", &a);
    
    printf("Qual é o valor de b? \n");
    scanf("%f", &b);
    
    printf("Qual é o valor de c? \n");
    scanf("%f", &c);
    
    
    delta = b * b - 4 * a * c;
    
    if(delta <= 0)
    {
        printf("erro");
    }
    
    else
    {
        printf("O valor de delta é %2.f", delta);
    }
    
    return 0;
}