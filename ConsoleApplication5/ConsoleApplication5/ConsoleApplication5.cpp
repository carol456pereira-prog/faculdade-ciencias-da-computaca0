
#include <iostream>

int main()
{
#include <stdio.h>

    int main() {
        int valor;
        int n200, n100, n50, n20, n10, n5;
        int q200, q100, q50, q20, q10, q5;
        int total;

        printf("Digite o valor do saque: ");
        scanf("%d", &valor);

        // Verifica se o valor é válido (multiplo de 5)
        if (valor <= 0 || valor % 5 != 0) {
            printf("Valor invalido! Deve ser positivo e multiplo de 5.\n");
            return 0;
        }

        // Estoque inicial (exemplo: 5 notas de cada)
        n200 = 5; n100 = 5; n50 = 5; n20 = 5; n10 = 5; n5 = 5;

        q200 = q100 = q50 = q20 = q10 = q5 = 0;
        total = valor;

        // Calcula quantas notas de 200 (preservando 1)
        if (total >= 200 && n200 > 1) {
            q200 = (total / 200);
            if (q200 > n200 - 1) q200 = n200 - 1;
            total -= q200 * 200;
        }

        // Notas de 100 (preservando 1)
        if (total >= 100 && n100 > 1) {
            q100 = (total / 100);
            if (q100 > n100 - 1) q100 = n100 - 1;
            total -= q100 * 100;
        }

        // Notas de 50
        if (total >= 50 && n50 > 1) {
            q50 = (total / 50);
            if (q50 > n50 - 1) q50 = n50 - 1;
            total -= q50 * 50;
        }

        // Notas de 20
        if (total >= 20 && n20 > 1) {
            q20 = (total / 20);
            if (q20 > n20 - 1) q20 = n20 - 1;
            total -= q20 * 20;
        }

        // Notas de 10
        if (total >= 10 && n10 > 1) {
            q10 = (total / 10);
            if (q10 > n10 - 1) q10 = n10 - 1;
            total -= q10 * 10;
        }

        // Notas de 5
        if (total >= 5 && n5 > 1) {
            q5 = (total / 5);
            if (q5 > n5 - 1) q5 = n5 - 1;
            total -= q5 * 5;
        }

        // Verifica se conseguiu sacar tudo
        if (total == 0) {
            printf("Saque realizado com sucesso!\n");
            printf("Notas de 200: %d\n", q200);
            printf("Notas de 100: %d\n", q100);
            printf("Notas de 50: %d\n", q50);
            printf("Notas de 20: %d\n", q20);
            printf("Notas de 10: %d\n", q10);
            printf("Notas de 5: %d\n", q5);
            printf("Total de cedulas: %d\n", q200 + q100 + q50 + q20 + q10 + q5);
        }
        else {
            printf("Nao e possivel realizar o saque (regra de preservacao).\n");
        }

        return 0;
    }
}

