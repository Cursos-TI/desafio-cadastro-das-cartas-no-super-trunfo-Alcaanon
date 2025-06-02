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
    float area, pib, densidade, pibPerCapita;
    
    //
    char estado2[5], codigo2[10], nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Início do programa
    printf("|==============[PROGRAMA INICIADO]==================|: \n");
    printf("|==============[CADASTRO DE CARTAS]==================|: \n");
    printf("|==============[CARTAS DE CIDADES]==================|: \n");
    // Leitura dos dados CARTA 1
    printf("|==============[INICIO CARTA 1]==================|: \n");
    printf("Digite os dados da Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o código:");
    scanf("%s", codigo);
    getchar(); // Problemas com o espaço em branco após o scanf, usando fgets para ler a string com espaços
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
    // Cálculo da densidade populacional
    densidade = populacao / area;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade);
    // Cálculo do PIB per capita
    pibPerCapita = (pib * 1000000000) / populacao;
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    printf("|==============[FIM DA CARTA 1]==================|: \n\n");

    // Leitura dos dados CARTA 2
    printf("|==============[INICIO CARTA 2]==================|: \n");
    printf("Digite os dados da Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código:");
    scanf("%s", codigo2);
    getchar(); // Problemas com o espaço em branco após o scanf, usando fgets para ler a string com espaços
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
    // Cálculo da densidade populacional
    densidade2 = populacao2 / area2;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    // Cálculo do PIB per capita
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("|==============[FIM DA CARTA 2]==================|: \n\n");

    // Exibição dos dados
    printf("|==============[DADOS DAS CARTAS]==================|: \n");
    //Carta 1
    printf("\n |==============[CARTA 1]==================|: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s", nome);
    printf("População: %d habitantes\n ", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);

    //Carta 2
    printf("\n |==============[CARTA 2]==================|: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("|==============[FIM DADOS DAS CARTAS]==================|: \n\n");

    // Fim do programa
    printf("|==============[PROGRAMA FINALIZADO]==================|: \n");
    return 0;
}
