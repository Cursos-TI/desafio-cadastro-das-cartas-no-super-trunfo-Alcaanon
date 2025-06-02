#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

    // Declaração das variáveis CARTA 1
    char estado[5], codigo[10], nome[50];
    int populacao, pontosTuristicos;
    float area, pib;
    
    //
    char estado2[5], codigo2[10], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Início do programa
    printf("|==============[PROGRAMA INICIADO]==================|: \n");
    printf("|==============[CADASTRO DE CARTAS]==================|: \n");
    printf("|==============[CARTAS DE CIDADES]==================|: \n");
    // Leitura dos dados CARTA 1
    printf("|==============[CARTA 1]==================|: \n");
    printf("Digite os dados da Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o código:");
    scanf("%s", codigo);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área(em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB(em bilhões de R$): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    printf("|==============[FIM DA CARTA 1]==================|: \n\n");

    // Leitura dos dados CARTA 2
    printf("|==============[CARTA 2]==================|: \n");
    printf("Digite os dados da Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código:");
    scanf("%s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área(em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB(em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("|==============[FIM DA CARTA 2]==================|: \n\n");

    // Exibição dos dados
    printf("|==============[DADOS DAS CARTAS]==================|: \n");
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s", nome);
    printf("População: %d habitantes\n ", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("|==============[FIM DADOS DAS CARTAS]==================|: \n\n");

    // Fim do programa
    printf("|==============[PROGRAMA FINALIZADO]==================|: \n");
    return 0;
}
