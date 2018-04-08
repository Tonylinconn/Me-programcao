#include <stdio.h>
#include <stdlib.h>

void main()
{
    float Farenheit, celsius;
    printf("Entre com o valor em graus Farenheit: ");
    scanf("%f", &Farenheit);
    celsius = 5*(Farenheit-32)/9;
    printf("O valor convertido de Farenheit para celsius e %f", celsius);
}
