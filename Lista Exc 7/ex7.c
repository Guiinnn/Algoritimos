    // Escreva um programa que, dada a idade de um nadador, o classifique em uma das 
    //seguintes categorias: 
    //Categoria Idade 
    //Infantil A 5-7 Infantil B 8-10 
    //Juvenil A 11-13 Juvenil B 14-17 
    //Sênior maiores de 18 anos

    #include <stdio.h>

    int main () {
        int idade;
        scanf("%d", &idade);

        if (idade >= 5 && idade <= 7) {
            printf("Infantil A");
        }
        else if (idade >= 8 && idade <= 10) {
            printf("Infantil B");
        }
        else if (idade >= 11 && idade <= 13) {
            printf("Juvenil A");
        }
        else if (idade >= 14 && idade <= 17) {
            printf("Juvenil B");
        }
        else if (idade >= 18 && idade <= 100) {
            printf("Senior");
        }
        else if (idade > 100 ) {
            printf("Idade invalida");
        }

        return 0;
    }