

#include <stdio.h>

int main()
{
	float moedas, saldo_total = 0.0;

	printf("adicione as moedas equivalentes a 0.50,1.00,2.00");
	scanf("%f", &moedas);
	
	while (moedas != 0.0) {
		saldo_total += moedas;
		printf("adicione as moedas equivalentes a 0.50,1.00,2.00");
		scanf("%f", &moedas);

		if (moedas == 0.50 || moedas == 1.00 || moedas == 2.00) {
			saldo_total += moedas;
		}
		else {
			printf("moeda invalida\n");
		}
	}
	printf("Saldo total: %.2f\n", saldo_total);
}



