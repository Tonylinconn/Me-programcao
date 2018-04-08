#include <stdio.h>
#include <stdlib.h>

void main()
{
    float prova1, me1, nota1, nota_final, nota_achar, nota_mostrar;
    printf("Entre com a nota da prova: ");
    scanf("%f", &prova1);
    printf("Entre com a nota da ME: ");
    scanf("%f", &me1);
    nota1=(prova1+me1);

    if(nota1 <= 10)
    {
        printf("Nota 1: %f\n", nota1);
        nota_final = (nota1 * 4);
        nota_achar = 60 - nota_final;

        nota_mostrar = nota_achar / 6;
        printf("\nA nota que voce precisa tirar na segunda unidade e %f", nota_mostrar);
    }
    else
    {
        printf("A soma das notas não pode ser maior que 10");
    }
}
