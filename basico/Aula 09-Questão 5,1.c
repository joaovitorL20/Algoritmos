/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m, n, k, soma, contador;
    
    soma = 0;
    contador = 0;
    
    printf("Valor de m:\n");
    scanf("%d", &m);
    
    printf("Valor de n:\n");
    scanf("%d", &n);
    
    printf("Valor de K:\n");
    scanf("%d", &k);
    
    for ( int i = n; i < m ; i++)
    {
        if(i % k == 0)
        { 
            soma = soma + i;
            contador = contador + 1;
        }
    
    }
    
    printf("Soma %d\n", soma);
    printf("Media %.2f", (float) soma / contador);
    return 0;
}
