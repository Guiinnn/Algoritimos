//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
//For maior que 20% do salário, imprima: “Empréstimo não concedido.” 
//○ Caso contrário, imprima: “Empréstimo concedido.” 

#include <stdio.h>

int main() {
    float salario, vlr_prestacao, limite;
    scanf("%f %f", &salario, &vlr_prestacao);

    limite = salario * 0.20;

    if (vlr_prestacao > limite) {
        printf("Emprestimo nao concedido");     
    }
    else if (vlr_prestacao < limite) {
        printf("Emprestimo concedido");
    }

    return 0;
}