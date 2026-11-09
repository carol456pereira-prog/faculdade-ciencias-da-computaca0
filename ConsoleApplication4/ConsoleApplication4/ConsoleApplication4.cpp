#include <stdio.h>

int main()
{

	printf("==== = MENU ==== =					  \n");
	printf("1 - Verificar numero par ou impar	  \n");
	printf("2 - Verificar se e positivo ou negativo\n");
	printf("3 - Calcular o quadrado do numero\n");
	printf("4 - Sair\n");

	int opcao;
	printf("Digite a opcao desejada: ");
	scanf_s("%d", &opcao);

	switch (opcao) {
	case 1:
		int numero;
		printf("Digite um numero : ");
		scanf_s("%d", &numero);

		if (numero % 2 == 0) {
			printf("O número %d e par.\n", numero);
		}
		else {
			printf("O numero %d e impar.\n", numero);
		}

		if (numero >= 0) {
			printf("O número %f e possitivo.\n", numero);
		}
		else if (numero < 0) {
			printf("O numero %f e negativo.\n", numero);
		}
		else {
			printf("O numero %f e zero.\n", numero);
		}
		break;
	case 2:
		float numero_2;
		printf("Digite um numero: ");
		scanf_s("%f", &numero_2);

		if (numero_2 >= 0) {
			printf("O número %f e possitivo.\n", numero_2);
		}
		else if (numero_2 < 0) {
			printf("O numero %f e negativo.\n", numero_2);
		}
		else {
			printf("O numero %f e zero.\n", numero_2);
		}
		break;

	case 3:
		float numero_3;
		printf("Digite um numero : ");
		scanf_s("%f", &numero_3);

		if (numero_3 * numero_3) {
			printf("O quadrado do numero %f é %f.\n", numero_3, numero_3 * numero_3);
		}
	case 4:
		printf("Sair\n");
		break;

	default:
		printf("Opcao invalida.\n");
		break;

	}
}