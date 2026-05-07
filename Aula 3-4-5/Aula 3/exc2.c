#include <stdio.h>

int main () {
    float base, altura;
    float area, perimetro;
    //Leitura de dados
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    //Calculos
    area = base * altura;
    perimetro = 2 * (base + altura);
    //Resultados
    printf("\n Resultado \n");
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}