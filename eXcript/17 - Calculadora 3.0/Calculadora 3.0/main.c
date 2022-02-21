#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>// essa biblioteca faz com que a função "getchar()" possa ser substituida pela função "getche()"

int main()
{
   float num1, num2, resultado;
   char oper = '0';

    do{
        num1 = num2 = resultado = 0;

        //Imprimindo as ações da nossa calculadora
        printf("--------------- Calculador 3.0 ---------------\n\n");
        printf("\tVeja as operacoes abaixo\n\n");
        printf("\t   (1) Somar\n");
        printf("\t   (2) Subtrair\n");
        printf("\t   (3) Multiplicar\n");
        printf("\t   (4) Dividir\n");
        printf("\t   (s)Sair do Programa\n\n");
        printf("\tDentre essas operacoes, escolha uma: \n\t");

        //fflush(stdin); <- Essa função auxiliava o getchar, para que ele não leia o Enter também
        //oper = getchar(); <- Antes esse era usado, mas vamos usar o getche()
        oper = getche();
        printf("\n");

        if(oper=='1'){
        printf("\n\tDigite o primeiro numero: \n\t");
        scanf("%f", &num1);
        printf("\n\tDigite o segundo numero: \n\t");
        scanf("%f", &num2);
        resultado = num1 + num2;

        printf(" \tO resutado eh: %.2f\n\n", resultado);
        }
        else if(oper=='2'){
        printf("\n\tDigite o primeiro numero: \n\t");
        scanf("%f", &num1);
        printf("\n\tDigite o segundo numero: \n\t");
        scanf("%f", &num2);

        resultado = num1 - num2;
        printf(" \tO resutado eh: %.2f\n\n", resultado);
        }
        else if(oper=='3'){
        printf("\n\tDigite o primeiro numero: \n\t");
        scanf("%f", &num1);
        printf("\n\tDigite o segundo numero: \n\t");
        scanf("%f", &num2);

        resultado = num1 * num2;
        printf(" \tO resutado eh: %.2f\n\n", resultado);
        }
        else if(oper=='4'){
        printf("\n\tDigite o primeiro numero: \n\t");
        scanf("%f", &num1);
        printf("\n\tDigite o segundo numero: \n\t");
        scanf("%f", &num2);

        resultado = num1 / num2;
        printf(" \tO resutado eh: %.2f\n", resultado);
        }
        else{
            printf("Tchau!");
        }
        getch();
        system("cls");

    }while(oper != 's');

    getch();
    system("pause");
    return 0;
}
