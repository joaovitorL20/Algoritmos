/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float bytes, velocidade, segundos;
    
    printf("Qual é quantidade de bytes do arquivo? \n");
    scanf("%f", &bytes);
    
    printf("Qual é a velocidades de transmissão em bytes? \n");
    scanf("%f", &velocidade);
    
    segundos = bytes / velocidade;
    
    printf("Serão necessários %2.f segundos", segundos);
    
    return 0;
}
