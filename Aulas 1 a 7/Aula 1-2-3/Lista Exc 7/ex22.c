//Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
//representará a operação que se deseja efetuar com os números. Assim, se o símbolo for
//“+”, deverá ser realizada uma adição, se for “-”, uma subtração, se for “/”, uma divisão, e,
//se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o
//programa principal.

#include <stdio.h>

double fnum(double num1, double num2, char simbolo) {

    switch(simbolo) {
        case '+':
            return num1 + num2;

        case '-':
            return num1 - num2;

        case '*':
            return num1 * num2;

        case '/':
            return num1 / num2;

        default:
            return 0;
    }
}

int main() {

    double n1, n2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &n1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // verifica operador
    switch (operador) {
        case '+':
        case '-':
        case '*':
        case '/':
            break;

        default:
            printf("Erro: operador invalido!\n");
            return 1;
    }

    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);

    resultado = fnum(n1, n2, operador);

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}