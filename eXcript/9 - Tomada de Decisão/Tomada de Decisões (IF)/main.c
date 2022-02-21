#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Biblioteca necessária para ler uma letra e transforma-la em maiuscula

int main()
{
    printf("\t\tPARTE 1\n");
    char c; //para ler uma letra

    printf("Digite um caracter em letra minuscula: "); //Imprimir
    scanf("%c", &c); //Scanear

    if(c>= 'a');
    {
        printf("\nSegue a letra que vc escreveu em maiuscula: > %c < \n",
               toupper(c)); //toupper é quase que to+upper (para cima), ou seja transforma para cima, maiusculo, no caso
    } //Condição, em que se for aceitavel será reescrita em maiuscula

    getch();
    system("pause");
    return 0;

}
