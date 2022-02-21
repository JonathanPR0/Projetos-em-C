#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero, cifra;
     setlocale(LC_ALL, "Portuguese");

    printf("\tINVERSOR DE NÚMEROS\n\n");
    printf("Digíte um Número para saber seu Inverso:\n");
    scanf("%i", &numero);

    if(numero>=0){
        do{
    cifra = numero % 10;
    printf("%i", cifra);
    numero =  numero / 10;
    }while(numero!=0);

    }else if(numero<1){
    numero = numero * -1;
    printf("-");
    do{
    cifra = numero % 10;
    printf("%i", cifra);
    numero =  numero / 10;
    }while(numero!=0);
    }
    else{
        printf("Nao entendi?!");
    }
    return 0;
}
