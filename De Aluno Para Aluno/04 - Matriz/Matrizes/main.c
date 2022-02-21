#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /* 01 - Introdução a matrizes */

    //matriz é que nem vetor, só que ela é de dois ou mais cochetes
    int matriz [3][3] = {{1,2,3},//ou int matriz [3][3] = {1,2,3,4,5,6,7,8,9}
                         {4,5,6},// o primeiro colchete é para acessar a linha
                         {7,8,9}};// o segundo colchete é para acessar a coluna
    printf("\t%i ", matriz[0][0]);// ele proucura a primeira linha e a primeira coluna
    printf("%i ", matriz[0][1]);// ele proucura a primeira linha e a segunda coluna
    printf("%i\n", matriz[0][2]);// ele proucura a primeira linha e a terceira coluna
    printf("\t%i ", matriz[1][0]);// ele proucura a segunda linha e a primeira coluna
    printf("%i ", matriz[1][1]);// ele proucura a segunda linha e a segunda coluna
    printf("%i\n", matriz[1][2]);// ele proucura a segunda linha e a terceira coluna
    printf("\t%i ", matriz[2][0]);// ele proucura a terceira linha e a primeira coluna
    printf("%i ", matriz[2][1]);// ele proucura a terceira linha e a segunda coluna
    printf("%i\n", matriz[2][2]);// ele proucura a terceira linha e a terceira coluna
    getch();
    system("cls");

    /* 02 - */
    return 0;
}
