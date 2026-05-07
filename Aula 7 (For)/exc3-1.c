#include <stdio.h>

int main() {
    float base, resultado = 1;
    int expoente, i;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // Caso simples: expoente >= 0
    for(i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}