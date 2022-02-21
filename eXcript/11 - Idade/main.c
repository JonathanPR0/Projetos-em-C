#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bebe, crianca, adolescente, adulto, idoso, idade;
    bebe = 2;
    crianca = 12;
    adolescente = 17;
    adulto = 59;
    idoso = 60;
    idade = 0;

    printf("######## Fase da Vida #######\n\n");

    printf(" Digite a Idade de uma Pessoa e Saiba em que Fase ela Esta: \n");
    scanf("  %i", &idade);


    if(idade <= bebe){
        printf("\n Essa pessoa pode ser considerada um bebe \n\n");
    }
    else if((idade >= 3)&&(idade <= 12)){
        printf("\n Essa pessoa pode ser considerada uma crianca\n\n");
    }
    else if((idade >= 13)&&(idade <= 17)){
        printf("\n Essa pessoa pode ser considerada um adolescente\n\n");
    }
    else if((idade >= 18)&&(idade <= 59)){
        printf("\n Essa pessoa pode ser considerada um adulto\n\n");
    }
    else{
        printf("\n Essa pessoa pode ser considerada um idoso\n\n");
    }

    //ENTA
    if((idade >= 40)&&(idade <=99)){
        printf("\n E que tambem faz parte da idade dos \"ENTA\"\n\n");
    }



    getch();
    system("pause");
    return 0;
}
