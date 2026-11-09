
#include <stdio.h>

int main()
{
	float consumo, soma_consumo = 0, media_consumo;

	for (int i = 0; i < 5; i++) {
		printf("Escreva seu consumo de agua em m³ %d: ", i + 1);
		scanf_s("%f", &consumo);


		if (consumo <= 20.0) {
			printf("Consumo do morador %d esta dentro da media.\n\n", i);
		}
		if (consumo > 20.0) {
			printf("Consumo do morador %d esta acima da media.\n\n", i);
		}

			soma_consumo += consumo;

			media_consumo = soma_consumo / 5.0;
			printf(" Resumo Geral\n");
			printf("Consumo medio geral do condominio: %.2f m3\n", media_consumo);

			return 0;
		}
	}
	


