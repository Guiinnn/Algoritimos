#include <stdio.h>

float calculaAreaRetangulo(float base, float altura)
{
    float area;
    area = base * altura;
    return area;
}

int main () {
    float resultado;
    resultado = calculaAreaRetangulo(5.0, 7.3);
    printf("Area calculada: %.2f\n", resultado);

    return 0;
}