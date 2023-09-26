/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float raio, volume;
    
    printf("Raio da esfera: \n");
    scanf("%f", &raio);
    
   volume = (float) 4 / 3 * 3.14 * raio * raio * raio;
    
    printf("O volume da esfera será: %.2f", volume);
    return 0;
}
