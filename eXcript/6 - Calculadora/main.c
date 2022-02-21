#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, soma, subtracao, multiplicacao, divisao;

	printf("A minha calculadora 1.0\n");
	printf("Digite os numeros na ordem que deseja que eles sejam operados:\n\n ");
	scanf("%i%i", &num1, &num2);

	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;

	printf("A soma dos numeros digitados eh: %i\n",soma);
	printf("A subtracao dos numeros digitados eh: %i\n", subtracao);
	printf("A multiplicacao dos numeros digitados eh :%i\n", multiplicacao);
	printf("A divisao na ordem dos numeros digitados eh: %i\n\n", divisao);

	getch();
	system("pause");
	return 0;
}
