#include <stdio.h>
#include <stdlib.h>
#define NUM 50

int main()
{
    int x = 0;

    printf("Operadores de Atribuicao\n");

    while(x < 11){
        printf("TESTE\n");
        x  += 1; // (x += 1) = (x = x + 1)
    }

    getch();
    system("pause");
    system("cls");

    //------------------------------------------------------------

    /*
    1) += -> Soma
    2) -= -> Subtralção
    3) *= -> Multiplicação
    4) /= -> Divisão
    5) %= -> Resto da Divisão
    */
    //printf("-----Operacao dos Numeros-----\n\n");

    //printf(" Escreva um nmero que vc quer que seja operado:\n ");
    //scanf("%i", &i);

    /*printf("Soma: %i\n", NUM+=100);
    printf("Subtracao: %i\n", NUM-=50);
    printf("Multiplicacao: %i\n",NUM*=3);
    printf("Divisao: %i\n", NUM/=3);
    printf("Resto da Divisao: %i\n", NUM%=3);

    getch();
    system("pause");
    return 0;*/
}
