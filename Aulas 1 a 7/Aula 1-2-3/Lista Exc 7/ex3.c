//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h>

int main() {
    int idade, ano_atual, ano_nascimento;
    scanf("%d %d", &idade, &ano_atual);

    ano_nascimento = ano_atual - idade;
    pritf("O ano de nascimento e: %d", ano_nascimento);

    return 0;
}