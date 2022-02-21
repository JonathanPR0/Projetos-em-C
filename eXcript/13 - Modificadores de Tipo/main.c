#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---------- MODIFICADORES DE TIPO ----------\n\n");

    printf(" 1 - Signed -> valores positivos e negativos\n");
    printf(" 2 - unsigned -> somente valores positivos\n");
    printf(" 3 - long -> aumentar a capacidade de armaznamento da nossa variavel\n");
    printf(" 4 - short -> diminuir o tamanho de armazenamento\n");

    getch();
    system("pause");
    system("cls");

    printf("________TAMANHOS DE ARMAZENAMENTO(EXEMPLO)________\n\n");

    unsigned short int u;
    printf("%i bytes -> variavel u\n", sizeof(u)); // sizeof é um comando para saber o tamanho de armazenamento de uma variavel

    int i = 14;
    short int;
    printf("%i bytes -> variavel i\n", sizeof(i));

    double g; //nao pode usar o short no double
    printf("%i bytes -> variavel g\n\n ", sizeof(g));




    getch();
    system("pause");
    return 0;
}
