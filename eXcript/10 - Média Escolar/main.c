#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis e seu valores
float nota1, nota2, nota3, nota4, media;
nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("======= Calculadora de Medias 2.0 =======\n");
    printf("\ Saiba se vc foi aprovado ou reprovado\n\n");

    printf(" Insira o que for pedido abaixo\n\n");

    printf(" Insira sua primeira nota: \n");
    scanf("%f", &nota1);
    printf(" Insira sua segunda nota: \n");
    scanf("%f", &nota2);
    printf(" Insira sua terceira nota: \n");
    scanf("%f", &nota3);
    printf(" Insira sua quarta nota: \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4;
    printf(" Sua media foi: %.2f", media);
    // O .2 antes do f indica que o valor impreso deve ter no máximo duas casas decimais

    if(media >= 6 && media <= 7){
        printf(" Vc foi APROVADO! Da para o gasto\n\n\n\n");
    }
    else if(media >= 7.1 && media <= 8){
        printf(" Vc foi APROVADO! Foi bem \n\n\n\n");
    }
    else if(media >= 8.1 && media <= 9){
        printf(" Vc foi APROVADO! Foi muito bem :)\n\n\n\n");
    }
    else if(media >= 9 && media < 10){
        printf(" Vc foi APROVADO! Foi otimo, continue assim ;)\n\n\n\n");
    }
    else if(media = 10){
        printf(" Vc foi aprovado! Meus parabens, literalmente vc eh um aluno nota 10\n\n\n\n");
    }
    else{printf(" Vc foi REPROVADO! Estude mais na proxima :( \n\n\n\n");}
    // O && é o mesmo que AND e faz com que haja uma indicação de que seja respeitado um limite
    // Nos casos o limete é em números, sendo maior ou igual a um, e menor ou igual a outro, com uma exessão


    printf("OBS: Esse progarama eh 2.0 pq o 1.0 eu perdi :(\n \tMas fiz algumas melhorias\n\n");

    getch();
    system("pause");
    return 0;
}
