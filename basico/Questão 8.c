/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float km, milhas;
    
    printf("Km:\n");
    scanf("%f", &km);
    
    milhas = km * 0.621371;
    
    printf("Milhas: %f", milhas);
    
    return 0;
}
