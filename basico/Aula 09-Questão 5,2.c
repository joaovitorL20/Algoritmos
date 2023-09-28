#include <stdio.h>

int main()
{
    int n1, n2, maior, menor;
    
    maior = 0;
    menor = 999999;
    
    
    printf("Escolha um número:\n");
    scanf("%d", &n2);
    
    
    
    for (int i = 1; i <= n2 ; i++)
    {
        printf("Número %d:\n", i);
        scanf("%d", &n1);
        
        if(n1 > maior)
        {
      maior = n1;
     
            
        }
        
        if(n1 < menor)
        {
            menor = n1;
        }
    }

  
  printf("Maior número:%d\n", maior);
  printf("Menor número:%d\n", menor);
  
  return 0;
    }