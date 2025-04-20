#include <stdio.h>

int main() {
    // Dados da Carta 1 - Serrinha
    char estado1[] = "BA"; 
    char codigo1[] = "A01"; 
    char nomeCidade1[] = "Serrinha"; 
    int populacao1 = 84181; 
    float area1 = 769.700; 
    float pib1 = 1.29; 
    int pontosTuristicos1 = 15; 

    // Dados da Carta 2 - Salvador
    char estado2[] = "BA"; 
    char codigo2[] = "A02"; 
    char nomeCidade2[] = "Salvador"; 
    int populacao2 = 2.884000; 
    float area2 = 693.8; 
    float pib2 = 63.52; 
    int pontosTuristicos2 = 40; 

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
