
#include <stdio.h>

int main()
{
    float a, b, c, d;
    
    printf("Quais são os pesos das bolas A, B, C e D?\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    if(a == d || b + c == d){
        printf("O mobile está equilibrado\n");
    }
    else{
        printf("O mobile não está equilibrado\n");
    }
    
    return 0;
}


