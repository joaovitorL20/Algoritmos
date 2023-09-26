/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float raio, altura, volume;
  
  printf("Raio do cilindro:\n");
  scanf("%f", &raio);
  
  printf("Altura do cilindro:\n");
  scanf("%f", &altura);
  
  volume = 3.14 * (raio * raio) * altura;
  
  printf("Volume do cilindro: %.2f\n", volume);
    
    return 0;
}
