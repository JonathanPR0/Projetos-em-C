#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

   const float bimAnuais = 4;
    const float numAlunos = 4;

   /*printf("Quantos alunos você tem? Digíte ao lado:\t");
   scanf("%f", &numAlunos);*/

   float notasAlunos[numAlunos][bimAnuais]= {0};
   float mediasAlunos[numAlunos] = {0};
   float media = 0;
;

    printf("InsÍra as 4 notas do seu aluno 1\n");

    for(int aluno = 0; aluno < numAlunos; ++aluno){
        for(int notas = 0; notas < bimAnuais; ++notas){
            scanf("%f", &notasAlunos[aluno][notas]);
            media = media + notasAlunos[aluno][notas];
        }
        medsiasAluno[aluno] = media / bimAnuais;
        media = 0;
        printf("Insíra as 4 notas do seu aluno %i\n", aluno + 1)
    }

    for(int aluno = 0; aluno < numAlunos; ++aluno){

    printf(" A média do aluno %i é: %.2f",aluno +1, mediasAluno[aluno]);
    }

    return 0;
}
