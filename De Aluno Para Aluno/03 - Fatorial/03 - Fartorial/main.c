#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fatorial;
    int menor;
    int resultado=1;
    printf("\tEscreva o n�mero de qual fatorial voc� quer saber:\n\t\t\t\t");
    scanf("%i", &fatorial);

    for( ;fatorial>= 1; --fatorial){
        resultado*=fatorial;
    }
    printf("\tO valor fatorial que voc� digitou � igual a: %i\n\n",resultado);
    getch();
    return 0;
}
