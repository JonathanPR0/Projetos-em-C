#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int num1, num2;
	num1 = 20;
	num2 = 40;

	int soma = num1 + num2;
	printf("O reultado de 20+40 eh: %i\n", soma);

	int subtracao = num2 - num1;
	printf("O resultado de 40-20 eh: %i\n", subtracao);

	int multiplicacao = num1 * num2;
	printf("O resultado de 20X40 eh: %i\n", multiplicacao);

	int divisao = num2 / num1; // Se um valor não tiver um valor inteiro, como por exemplo a divis�o de 20 por 3, o programa apresentará como resultado o valor 6
	printf("O resultado de 40/20 eh: %i\n\n", divisao);

	getch();
	system("pause");
	return 0;
}
