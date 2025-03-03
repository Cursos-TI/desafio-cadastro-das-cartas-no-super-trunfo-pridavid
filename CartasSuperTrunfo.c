#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

// Definição de constantes para tamanhos máximos das strings
#define TAM_CODIGO 5
#define TAM_NOME 50

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    char estado1, estado2;                     // Estado da cidade (A-H)
    char codigo1[TAM_CODIGO], codigo2[TAM_CODIGO]; // Código da carta (ex: A01, B03)
    char nomeCidade1[TAM_NOME], nomeCidade2[TAM_NOME]; // Nome da cidade
    int populacao1, populacao2;                // População da cidade
    float area1, area2;                        // Área da cidade em km²
    float pib1, pib2;                          // PIB da cidade em bilhões
    int pontosTuristicos1, pontosTuristicos2;  // Número de pontos turísticos

    // Leitura dos dados da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Lendo um caractere com espaço antes para ignorar quebra de linha anterior

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Lendo uma string (array de caracteres)

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lendo uma string com espaços

    printf("População: ");
    scanf("%d", &populacao1); // Lendo um número inteiro

    printf("Área (em km²): ");
    scanf("%f", &area1); // Lendo um número float

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Lendo um número float

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lendo um número inteiro

    // Leitura dos dados da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // Lendo um caractere

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2); // Lendo uma string

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lendo uma string com espaços

    printf("População: ");
    scanf("%d", &populacao2); // Lendo um número inteiro

    printf("Área (em km²): ");
    scanf("%f", &area2); // Lendo um número float

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2); // Lendo um número float

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); // Lendo um número inteiro

    // Exibição dos dados cadastrados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados cadastrados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}
