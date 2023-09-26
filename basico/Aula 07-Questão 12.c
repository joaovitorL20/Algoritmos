#include <stdio.h>

int main()
{
  float  comprimento,largura,preço,perimetro,preço_total;
  printf("Qual o comprimento e a largura do retangulo\n");
    scanf("%f %f",& comprimento,&largura );
    printf("Qual o preço do metro de arame?\n");
    scanf("%f",&preço);
   perimetro = ((comprimento*2)+(largura*2))*4;
    preço_total= perimetro*preço;
    
    printf("O preço de cobrir %.2fmetros de arame é%.2f reais",perimetro,preço_total);
    
    
    return 0;
}
