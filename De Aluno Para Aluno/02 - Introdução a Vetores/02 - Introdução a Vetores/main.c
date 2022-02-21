#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese");
     // Parte 1(Introdução de Vetores)
     float nota[5];

     nota[0] = 10;
     nota[1] = 8.9;
     nota[2] = 7.5;
     nota[3] = 9;
     nota[4] = 4.8;

    printf("%.1f\n", nota[2]);
    getch();
    system("cls");

    // Parte 2 (Declsração de Vetores)
    int vetor[5] = {0};

    for(int i=0; i<5; ++i){
        printf("%i\n", vetor[i]);
    }
    getch();
    system("cls");

    // Parte 3 (Manipulando Vetores)
    float notas [5] = {0};
    float total = 0;
    float media = 0;
    int i;

    printf("\tInsira 5 notas:\n\n");

    for (int i = 0; i < 5; ++i){
        printf("\t");
        scanf("%f", &notas[i]);
        total = total + notas[i];
        media = total/5;
        }

    printf("\n A média dos alunos é: %.1f", media);

    getch();
    return 0;
}
