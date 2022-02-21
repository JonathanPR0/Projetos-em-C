#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("----------Fazendo uso da funcao DoWhile----------\n\n");

    /*
    DoWhile
    ------------------------
    do{
     operador
    }
    while(true);

    */
    int contador = 0;
    char c;
    do{
        contador += 1;
        printf("        Digite o numero 7! Se nao eu vou perguntar de novo.\n");
        printf(" Ja se foram %i vez(es), vai querer tentar de novo, eu nao vou desistir\n ", contador);
        fflush(stdin);// Isso é para o getchar(que pelo o que entendi, serve com um scanf) não pensar que
        //a tecla ENTER tambem deve ser impressa, e duplicar a msg
        c = getchar();
    }
    while(c!='7');

    getch();
    system("pause");
    return 0;
}
