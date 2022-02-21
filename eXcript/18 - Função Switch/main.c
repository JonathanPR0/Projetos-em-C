#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero=0;
    /*
    switch(expressao){
    case(expressao-cost):        cost=constante
    break;
    case(true):
    break;
    ...
    default     <---- sempre será realizada

    */

    do{
    printf("-------------------------Funcao Switch-------------------------\n\n");

    printf(" Digite um numero de 0 a 9, senao o programa vai pedir dnv\n\n\t\t\t>>");
    scanf("%i", &numero);

    switch(numero){
        case 0:
            printf("O numero digitado foi 'zero'");
        break;
        case 1:
            printf("O numero digitado foi 'um'");
        break;
        case 2:
            printf("O numero digitado foi 'dois'");
        break;
        case 3:
            printf("O numero digitado foi 'tres'");
        break;
        case 4:
            printf("O numero digitado foi 'quatro'");
        break;
        case 5:
            printf("O numero digitado foi 'cinco'");
        break;
        case 6:
            printf("O numero digitado foi 'seis'");
        break;
        case 7:
            printf("O numero digitado foi 'sete'");
        break;
        case 8:
            printf("O numero digitado foi 'oito'");
        break;
        case 9:
            printf("O numero digitado foi 'nove'");
        break;
        default:
            printf("\n\n+++++++++++++++++++++++++++ REPITA! +++++++++++++++++++++++++++\n");
            getch();
            system("cls");

    }}while(!((numero>=0)&&(numero<=9)));


    system("pause");
    return 0;
}
