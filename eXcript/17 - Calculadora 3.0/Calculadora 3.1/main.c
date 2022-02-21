#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>// essa biblioteca faz com que a funçõeo "getchar()" possa ser substituida pela função "getche()"



    int main(){
        float num1, num2, resultado;
   char oper = '0';
        do{
        num1 = num2 = resultado = 0;

        //Imprimindo as ações da nossa calculadora
        printf("--------------- Calculador 3.1 ---------------\n\n");
        printf("\tVeja as operacoes abaixo\n\n");
        printf("\t   (1) Somar\n");
        printf("\t   (2) Subtrair\n");
        printf("\t   (3) Multiplicar\n");
        printf("\t   (4) Dividir\n");
        printf("\t   (0)Sair do Programa\n\n");
        printf("\tDentre essas operacoes, escolha uma: \n\t");

        //fflush(stdin); <- Essa função auxiliava o getchar, para que ele não leia o Enter também
        //oper = getchar(); <- Antes esse era usado, mas vamos usar o getche()
        oper = getche();
        printf("\n");



        if(oper!='0'){
        printf("\n\tDigite o primeiro numero: \n\t");
        scanf("%f", &num1);
        printf("\n\tDigite o segundo numero: \n\t");
        scanf("%f", &num2);

        if(oper=='1'){
            resultado = num1 + num2;
        }else{
            if(oper=='2'){
                resultado = num1 - num2;
            }else{
                if(oper=='3'){
                    resultado = num1 * num2;
                }else{
                    if(oper=='4'){
                        resultado = num1 / num2;
                    }else{
                    printf("\t\tTCHAU!");}
                }
            }
        }


        printf(" \tO resultado eh: %.1f\n\n", resultado);
         }
    getch();
    system("cls");
    }while(oper != '0');

    system("pause");
    return 0;
}

