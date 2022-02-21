#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t PARTE 2\n");
    printf(" 0 eh igual a falso\n 1 eh igual a verdadeiro\n");
    printf("\n int = 10\n");
    int i = 10;
    printf("\n\t int eh = 1: %i\n", i==1); //Se a afirmação for verdadeira ele ira imprimir 1, senão irá imprimir 0
    printf("\n\t int eh diferente de 1: %i\n", i!=1);
    printf("\n\t int nao eh = 1: %i\n\n", !(i==1));

    // 1 É UM SINAL DE NEGAÇÃO, IGUAL A EXPRESSÃO NOT

    printf("\n\t\tAGORA EH A SUA VEZ\n\n");
    printf("Digite um numero diferente de 5: \n");
    scanf("%i",&i);
    printf("\n A expressao eh: \n");
    if(i!=5)
    {
        printf(" TRUE\n");
    }
    else
    {
        printf(" FALSE\n");
    }

    /*

    1)Positivo -> 1
    2) Negativo -> 0

    Lógica Booleana

    */



    getch();
    system("pause");
    return 0;
}

//  == comparação positiva
// != comparação negativa
// !(i==1) -> i NÃO é igual a 1 (! é a negação de algo)
