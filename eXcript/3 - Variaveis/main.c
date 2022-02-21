#include <stdio.h>
#include <stdlib.h>

int main(){

	//Aula 1
	int i = 0;
	char a;
	printf("O valor de int eh: %d\n", i);
	i = 10;
	printf("Agora o novo valor eh: %d\n\n", i);

	//Aula 2
	//int num, num2 = 0;
	//Variuavel composta
	//double numeroVerificado; //A primeira palavra inicia em minúsculo e a segunda em maiusculo

	/*
	Não //int 2numeros;
	Sim //int _2numeros;
	*/
	//int _2numeros;

	/* variaveis não podem ter espaço
	Não fazer:
	int programação em C;
	Pode fazer:
	int programação_em_C;
	*/
	//int programação_em_C;


	//Aula 3
	/*Tipos de variav�is
		1) char (letras)
		2) int (n�meros inteiros)
		3) float (n�meros com virgula com capacidade de at� 8 casas decimais )
		4) void (vazio)
		5) double (Semel�hante ao float s� quecom capacidade de at� 15 casas decimais)
		*/

	char letra ='a';
	int numero = 7;
	float pi =3.14;
	//void;
	double numero_grande = 1.23456789101112;

	printf("%d\n", letra); //<-Nesse ele vai mostrar o valor da minha letra, não a letra
	printf("%d\n", numero);
	printf("%d\n", pi);
	printf("%d\n", numero_grande);

    getch();
	system("pause");
	return 0;
	}
