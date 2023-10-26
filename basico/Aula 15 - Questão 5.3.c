#include <stdio.h>

int main()
{
    int n;
    int soma = 0;
    int i = 1;
    printf("Digite o valor de n\n");
    scanf("%d", &n);
    
    while(i<=n)
    {
        printf("%d", i);
        soma += i;
        i++;
    }
    
    float media = (float) soma / n;
    
    printf("Soma:%d\n", soma);
    printf("Media:%.2f\n", media);
    
    
    
    
    return 0;
}