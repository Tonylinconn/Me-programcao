#include <stdio.h>
#include <stdlib.h>

void main()
{
    int t1, t2;
    t1 = 29;
    t2 = 3;

    float alunos[t1][t2], valor_atual, nota1, me1, nota2, me2, media;

    for(int i = 0; i < (t1 + 1); i++)
    {
        printf("Aluno %i\n",(i+1));
        printf("Entre com a nota 1: ");
        scanf("%f", &nota1);
        alunos[i][0] = nota1;

        printf("Entre com a M.E 1: "); 
        scanf("%f", &me1);
        alunos[i][1] = me1;

        printf("Entre com a nota 2: ");
        scanf("%f", &nota2);
        alunos[i][2] = nota2;


        printf("Entre com a me 2: ");
        scanf("%f", &me2);
        alunos[i][3] = me2;

        media = ( ((nota1+me1)*4) + ((nota2+me2)*6) ) /10;

        if(media >= 6) {
            printf("Sua media e : %f, Voce passou!", media);
        } 
        else if(media < 6 && media >= 4) {
            printf("Sua media e : %f, Voce ta na final!", media);
        }
        else {
            printf("Sua media e : %f, Voce reprovou!", media);
        }

        printf("\n\n");
    }
}
