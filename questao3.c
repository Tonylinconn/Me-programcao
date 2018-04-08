#include <stdio.h>
#include <stdlib.h>

void main()
{
 float salario_bruto, desconto, salario_liquido1, salario_liquido2, salario_liquido3;
    printf("Entre com o salario:");
    scanf("%f", &salario_bruto);
    printf("Seu salario bruto e: %f\n", salario_bruto);
    salario_liquido1=(salario_bruto-(8*(salario_bruto)/100));
    salario_liquido2=(salario_bruto-((9*salario_bruto)/100));
    salario_liquido3=(salario_bruto-((11*salario_bruto)/100));
    if(salario_bruto<=1693.72){
            printf("O salario liquido sera de: %f\n", salario_liquido1);
            printf("O desconto foi de: 8 porcento");
    }
    else if (salario_bruto>1693.72 && salario_bruto<=2822.90){
        printf("O salario liquido sera de: %f\n", salario_liquido2);
        printf("O desconto foi de: 9 porcento");
    }
    else if (salario_bruto>2822.90){
        printf("O salario liquido sera de: %f\n", salario_liquido3);
        printf("O desconto foi de: 11 porcento");
    }
}
