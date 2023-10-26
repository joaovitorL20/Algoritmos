
#include <stdio.h>

int main()
{
    int metro;
    float valor;
    
    printf("Quantidade consumida de gás em m3\n");
    scanf("%d", &metro);
    
    if(metro <= 7){
        valor = metro * 1.00;
        printf("O valor a ser pago será:$%.2f\n", valor);
    }
    else if(metro >= 8 || metro <= 23){
        valor = 7 * 1 + metro * 2.00;
        printf("O valor a ser pago será:$%.2f\n", valor);
    }
    else if(metro >= 24 || metro <= 83){
        valor = 7 * 1 + 16 * 2 + metro * 3.00;
        printf("O valor a ser pago será:$%.2f\n", valor);
    }
    else if(metro > 83){
        valor = 7 * 1 + 16 * 2 + 60 * 3 + metro * 4;
        printf("O valor a ser pago será:$%.2f\n", valor);
    }
    
    return 0;
}


