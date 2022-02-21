#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	//FUNÇÕES:
	// 1) \n - pula/quebra uma linha
	printf("Eu sou o inevitavel\n");
	// 2) \t - como se a tecla tab fosse pressionada (tabula��o)
	printf("\tEu sou o inevitavel\n");
	// 3) \\ - imprime uma barra invertida
	printf("\\Eu sou o inevitavel\\ \n");
	// 4) \" - imprime aspas duplas, n�o fazendo o copilador entender que elas representam o final do texto
	printf("\"Eu sou o inevitavel\" \n");
	// 5) \' - impriume aspas simples
	printf("\'Eu sou o inevitavel\' \n");
	// 6) \0 - funciona como se fosse as aspas duplas de fechamento de um programa
	// OBS.: N�o vou apresentar em funcionamento pq n�o sei como fazer

	getch();
	system("pause");
	return 0;
}
