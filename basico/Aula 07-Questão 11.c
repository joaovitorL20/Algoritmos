#include <stdio.h>

int main()
{
  float  comprimento,largura,preço,area,preço_total;
  printf("Qual o comprimento e a largura do retangulo\n");
    scanf("%f %f",& comprimento,&largura );
    printf("Qual o preço do metro quadrado de grama\n");
    scanf("%f",&preço);
    area = comprimento*largura;
    preço_total= area*preço;
    
    printf("O preço de cobrir %.2fmetros quadrados de grama é%.2f",area,preço_total);
    
    
    return 0;
}
