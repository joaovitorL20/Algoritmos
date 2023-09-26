/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius, farenheit;
    
    printf("Qual é a temperatura em graus celsius? \n");
    scanf("%f", &celsius);
    
    farenheit = 32 + (float) (212 - 32) / 100 * celsius;
    
    printf("O valor da temperatura é %2.f farenheit \n", farenheit);
    return 0;
}
