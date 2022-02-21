#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    num = 0;

    printf("\t Uso do AND e do OR\n\n");

    //AND = &&
    /*
    (TRUE)&&(TRUE) = TRUE
    (TRUE)&&(FALSE) = FALSE
    (FALSE)&&(TRUE) = FALSE
    (FALSE)&&(FALSE) = FALSE
    */

    printf("  Digite um numero entre 10 e 20: \n");
    scanf("%i", &num);

    if((num >= 10) && (num <= 20)){
        printf(" \n O numero digitado (%i) eh um numero entre 10 e 20\n\n", num);
    }
    else{
        printf(" \n O numero digitado (%i) não eh um numero entre 10 e 20\n\n", num);
    }

    //OR = ||
    /*
    (TRUE)||(TRUE) = FALSE
    (TRUE)||(FALSE) = TRUE
    (FALSE)||(TRUE) = TRUE
    (FALSE)||(FALSE) = TRUE
    */

    printf("  Digite o numero 10 ou o numero 20: \n");
    scanf("%i", &num);

    if((num >= 10) || (num <= 20)){
        printf(" \n O numero digitado (%i) eh o numero 10 ou o numero 20\n\n\n", num);
    }
    else{
        printf(" \n O numero digitado (%i) não eh o numero 10 ou o numero 20\n\n\n", num);
    }
    // system("cls"); faz a limpeza de tudo que vier antes dele
    system("pause");
    system("cls");

    printf("\t OPERADORES LOGICOS EM BOOLEANO\n\n");

   //AND
    int x = 14;
    int cond = 0;

    printf("\t AND\n\n");

    cond = (x==14)&&(x<20); // (TRUE) + (TRUE) = TRUE
    printf("\t%i\n", cond);

    cond = (x==0)&&(x!=100); // (FALSE) + (TRUE) = FALSE
    printf("\t%i\n", cond);

    cond = (x==14)&&(x!=14); // (TRUE) + (FALSE) = FALSE
    printf("\t%i\n", cond);

    cond = (x!=14)&&(x==0); // (FALSE) + (FALSE) = FALSE
    printf("\t%i\n\n", cond);


    //OR
    int y = 14;
    int condin = 0;

    printf("\t OR\n\n");

    condin = (y==14)||(y<1); // (TRUE) + (TRUE) = TRUE
    printf("\t%i\n", condin);

    condin = (y==0)||(y!=100); // (FALSE) + (TRUE) = TRUE
    printf("\t%i\n", condin);

    condin = (y==14)||(y!=14); // (TRUE) + (FALSE) = TRUE
    printf("\t%i\n", condin);

    condin = (y!=14)||(y==0); // (FALSE) + (FALSE) = FALSE
    printf("\t%i\n\n", condin);


    getch();
    system("pause");
    return 0;
}
