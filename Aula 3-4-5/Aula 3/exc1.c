#include <stdio.h>

int main() {
    int n;
    int resultado;
    // Loop
    do {
        printf("Digite um valor: ");
        resultado = scanf("%d", &n);

        if (resultado != 1) {
            printf("Erro: Digite um numero valido!\n");
            // Limpa o buffer de entrada até o fim da linha
            while (getchar() != '\n');
        }
    } while (resultado != 1);

    printf("Antecessor: %d\n", n - 1);
    printf("Numero: %d\n", n);
    printf("Sucessor: %d\n", n + 1);

    return 0;
}