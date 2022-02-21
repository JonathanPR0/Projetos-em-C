#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// BTU_SOL 800;
// BTU_SOMBRA 600;

int main()
{

    int lugar = 0;
    int pessoas = 0;
    int BTUS = 0;
    int eletronicos = 0;
    int area = 0;
    int quantidade = 0;
    char comando;

    do{

    printf("---------------------- Calculadora de Btus -----------------------\n\n");

    printf("              | Veja as opcoes abaixo e digite: |                    \n");
    printf("              |        (c) Calcular             |                    \n");
    printf("              |        (s) Sair                 |                    \n\n");
    printf("          Digite o comando que vc quer que seja usado:                \n");
    printf("\t\t\t>>>");
    comando = getche();


    getch();
    system("cls");

    if(comando == 'c' || comando == 'C'){
    printf("\n\tVc precisara responder as seguintes perguntas primeiro:\n");
    printf(" \n\t\t    Marque:\n\t\t (1 para Sim) \n\t\t (0 para Nao)\n\n");
    printf("\tSeu local tem muita incidencia de sol?\n\t\t\t");
    scanf("%i", &lugar);


        if(lugar = 1){
            /*------------local SOL-------------------*/
            BTUS = 800;
        }else if(lugar = 0){
        /*------------local SOMBRA-------------*/
            BTUS = 600;
        }
        //!Tentar corrigir erro de repetição!

    printf("\n");
    printf("     Quantas pessoas em media ficam no comodo do ar-condicionado?\n\t\t\t");
    scanf("%i", &pessoas);

    printf("\n\n   Quantos aparelhos eletronicos vc tem no comodo do ar-condicionado?\n\t\t\t");
    scanf("%i", &eletronicos);
    printf("\n\n");

    printf("\tQual a area em metros quadrados do comodo?\n\t\t\t");
    scanf("%i", &area);


    quantidade = (pessoas * BTUS) + (eletronicos * BTUS) + (area * BTUS);


    printf("\n--------------------------------------------------------------------------\n\n");
    printf("       O aparelho para o seu comodo deve ter no minimo: %i btus\n\n", quantidade);
    printf("--------------------------------------------------------------------------\n\n\t");

    if(quantidade <= 7.500){
    printf("Recomendamos que vc use um ar-condicionado de '7.500' btus\n\n");
    }
    else if ((quantidade>=7501) && (quantidade<=9000)){
    printf("Recomendamos que vc use um ar-condicionado de '9.000' btus\n\n");
    }
    else if ((quantidade>=9001)&&(quantidade<=12000)){
    printf("Recomendamos que vc use um ar-condicionado de '12.000' btus\n\n");
    }
    else if ((quantidade>=12001) && (quantidade<=18000)){
    printf("Recomendamos que vc use um ar-condicionado de '18.000' btus\n\n");
    }
    else if ((quantidade>=18001) && (quantidade<=22000)){
    printf("Recomendamos que vc use um ar-condicionado de '22.000' btus\n\n");
    }
    else if ((quantidade>=22001) && (quantidade<=24000)){
    printf("Recomendamos que vc use um ar-condicionado de '24.000' btus\n\n");
    }
    else if ((quantidade>=24001) && (quantidade<=30000)){
    printf("Recomendamos que vc use um ar-condicionado de '30.000' btus\n\n");
    }
    else if ((quantidade>=30001) && (quantidade<=36000)){
    printf("Recomendamos que vc use um ar-condicionado de '36.000' btus\n\n");
    }
    else if ((quantidade>=36001) && (quantidade<=48000)){
    printf("Recomendamos que vc use um ar-condicionado de '48.000' btus\n\n");
    }
    else if ((quantidade>=48001) && (quantidade<=58000)){
    printf("Recomendamos que vc use um ar-condicionado de '58.000' btus\n\n");
    }
    else {
            getch();
            system("cls");

        printf("\n\n\n      Nao existe maquina nessa potencia. Sugerimos que vc use a informacao anteriomente citada\n");
        printf("        some a potencia de duas ou mais maquinas para obter a quantidade de btus necessaria,\n ");
        printf("              usando, por exemplo, as potencias das seguintes maquinas:\n\n");
        printf("\t\t<|___________________________________|>\n");
        printf("\t\t<|                                   |>\n");
        printf("\t\t<| Ar-condicionado de '7.500' btus;  |>\n");
        printf("\t\t<| Ar-condicionado de '9.000' btus;  |>\n");
        printf("\t\t<| Ar-condicionado de '12.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '18.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '22.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '24.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '30.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '36.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '48.000' btus; |>\n");
        printf("\t\t<| Ar-condicionado de '58.000' btus; |>\n");
        printf("\t\t<|___________________________________|>\n\n");

        getch();
        }
        getch();
        system("cls");
        }
        else if(comando == 's'){
            printf("\n\n\t\tADEUS!\n\n");
        }
        else{
            printf("\n\n\t\tREPITA!\n\n");
            getch();
            system("cls");
        }

        }while( comando!='s');

    getch();
    return 0;
}
