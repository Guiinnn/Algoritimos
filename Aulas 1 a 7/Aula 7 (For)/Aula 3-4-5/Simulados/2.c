#include <stdio.h>

int main() {
    float distancia, velocidade, tempo_horas;
    float resto_minutos;
    int horas, minutos, segundos;
    
    printf("Digite os quilometros: ");
    scanf("%f", &distancia);
    
    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);
    
    // Calcula o tempo em horas
    tempo_horas = distancia / velocidade;
    
    // Converte para horas minutos e segundos
    horas = (int)tempo_horas;
    
    // Calcula os minutos
    resto_minutos = (tempo_horas - horas) *60;
    minutos = (int)resto_minutos;
    
    // Calcula os segundos
    segundos = (int)((resto_minutos - minutos) *60);

    printf("O tempo estimado e %d horas, %d minutos e %d segundos.\n", 
           horas, minutos, segundos);
    
    return 0;
}