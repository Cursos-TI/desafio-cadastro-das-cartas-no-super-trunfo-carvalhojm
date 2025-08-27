#include <stdio.h>

int main(){

    // variáveis primeira carta
    char carta1[10] = "Carta 1";
    char estado1;
    char codigo_carta1[4];
    char cidade1[30];
    unsigned long int populacao1; 
    int pontos_turisticos1;
    float area1, pib1; // area em km²
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // variáveis segunda carta 
    char carta2[10] = "Carta 2";
    char estado2;
    char codigo_carta2[4];
    char cidade2[30];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // resultados
    int resultado_populacao, resultado_pontos_turisticos, restulado_area,
        resultado_pib, resultado_densidade, resultado_pib_per_capita, 
        resultado_super_poder;

    // recebendo dados primeira carta
    printf("\nCadastro %s\n", carta1);
    printf("Insira a primeira letra em maísculo do estado da carta. Lentras entre 'A' a 'H': \n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Insira o nome da cidade da carta: \n");
    scanf("%s", cidade1);

    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade em km²: \n");
    scanf(" %f", &area1);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);
    // realizando operações
    densidade_populacional1 =  populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // recebendo dados segunda carta
    printf("\nCadastro %s\n", carta2);
    printf("Insira a primeira letra em maísculo do estado da carta. Lentras entre 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo_carta2);

    printf("Insira o nome da cidade da carta: \n");
    scanf("%s", cidade2);

    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área da cidade em km²: \n");
    scanf(" %f", &area2);

    printf("Insira o PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);
    // realizando operações
    densidade_populacional2 =  populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    // soma do super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // comparação dos resultados
    resultado_populacao = populacao1 > populacao2;
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    restulado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_densidade = densidade_populacional1 < densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;

    // saídas primeira e segunda carta
    printf("\n### Dados da %s: ###\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\n### Dados da %s: ###\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    // saídas resultados da comparação
    printf("\n### Compração de Cartas ###\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", restulado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf("Desnidade Populacional: %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pib_per_capita);
    printf("Super Poder: %d\n", resultado_super_poder);

    return 0;
}