#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int valorDigitado = 0;

    printf(" Digite quantas vezes vc quer ver os multiplos de 5\n");
    scanf("%i", &valorDigitado);

    while(i <= valorDigitado){
        printf("\n%i\n", i * 5);
        i = i + 1;
    }


    getch();
    system("pause");
    system("cls");

   /* printf("__________Numeros pares__________\n\n");

    int par = 0;
    int num = 1;

    printf(" Digite quantas vezes vc quer ver os numeros pares:\n");
    scanf("%i", &par);

    while(num < par){
        printf("\n%i\n", num + 2);
        num = num + 2;

    }
    getch();
    system("pause");*/

    return 0;
}
