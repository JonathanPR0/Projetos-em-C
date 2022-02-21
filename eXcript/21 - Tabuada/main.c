#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero=0;
    char TABUADA='0';

    printf("\n*************************TABUADA************************\n\n");

    printf(" Digite a tabuada do numero que vc deseja ver:\n\t\t>>>");
    scanf("%i", &numero);
    printf("\n");
    for(int x=1; x<=10; ++x){
        printf("\t%iX%i = %i\n", x, numero, x * numero);}

    getch();
    return 0;}

