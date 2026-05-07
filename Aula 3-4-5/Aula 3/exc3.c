#include <stdio.h>

int main() {
    float despesas;
    float gorjeta;
    float total;

    // Ler
    printf("Digite o valor total das despesas no restaurante: R$ ");
    scanf("%f", &despesas);

    // Calcular gorjeta
    gorjeta = despesas * 0.10;

    // Calculo total
    total = despesas + gorjeta;

    // Resultados
    printf("\n--- Conta do Restaurante ---\n");
    printf("Despesas:      R$ %.2f\n", despesas);
    printf("Gorjeta (10%%): R$ %.2f\n", gorjeta);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}