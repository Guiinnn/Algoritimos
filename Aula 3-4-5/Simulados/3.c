#include <stdio.h>

float calcularVolume(float largura, float altura, float comprimento) {
    float volume_m3;
    float volume_litros;
    
    volume_m3 = largura * altura * comprimento;
    volume_litros = volume_m3 * 1000;     
    
    return volume_litros;
}

int main() {
    float largura, altura, comprimento;
    float volume;
    
    printf("Digite a largura: ");
    scanf("%f", &largura);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    
    volume = calcularVolume(largura, altura, comprimento);
    
    printf("O volume da caixa é %.2f litros.\n", volume);
    
    return 0;
}