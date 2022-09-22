/*Função que calcula a soma de dois números e imprime eles*/



#include<stdio.h>

int main(void)
{
    float a,b,r;
    
    printf("Digite o primeiro numero\n");
    scanf("%f",&a);
    printf("Digite o segundo numero\n");
    scanf("%f",&b);
    r=a+b;
    printf("Sua soma eh: %.2f\n", r);
    
    return 0;

}
