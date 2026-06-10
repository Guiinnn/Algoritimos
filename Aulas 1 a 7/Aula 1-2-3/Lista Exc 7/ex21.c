//Escreva uma função que receba o peso (quilos) e altura (metros) de uma pessoa.
//Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:
//𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜 / (𝑎𝑙𝑡𝑢𝑟𝑎*𝑎𝑙𝑡𝑢𝑟𝑎)

#include <stdio.h>

double IMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double quilos, metros;

    printf("Coloque seu peso atual em kg: ");
    scanf("%lf", &quilos);

    printf("Coloque sua altura em metros: ");
    scanf("%lf", &metros);

    double indice = IMC(quilos, metros);

    printf("Seu índice de massa corporal é: %lf", indice);

    return 0;
}