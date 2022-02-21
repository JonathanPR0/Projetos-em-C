#include <stdio.h>
#include <stdlib.h>

int main()
{
//	printf("%tipo_de_saida", valor_a_ser_impresso);
//	printf("%tipo1 %tipo2", var1, var2);

 //int -> tipo de saida é (i)
	int num = 1111;
	printf("O valor de num eh %i\n", num);

 //float -> tipo de saída é (f)
 	float f = 2.2;
 	printf("O valor de f eh: %f\n\n", f);

	//inteiro/interger %i ou %d
	//float / double %f
	//char %c
	//string %s

	//módulo de um número %u
	//endereço de memória %p
	//Imprimir um número com notação científica %e ou %E
	//Imprimir somente um sinal de porcentagem %%

	//ATIVIDADE
	int x = 10;
	printf("-%i\n", x);

	float ff= 4.12;
	printf("-%f\n\n", ff);

	printf("O valor inteiro eh: %i. E o valor com virgula eh: %f\n\n", x, ff);

	system ("pause");
	return 0;
}
