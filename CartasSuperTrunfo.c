#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Daniele

int main()
{

    // Variáveis para as cartas. 

    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoturistico1, pontoturistico2;

    //------ Cadastro da carta 1

    printf("Cartas do Super Trunfo \n");
    printf("Cartas 1 \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da Área em km²: \n");
    scanf("%f", &area1);

    printf("Qual o valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos Turístico: \n");
    scanf("%d", &pontoturistico1);


    //------ Cadastro da carta 2

    printf("\n");
    printf("Cartas 2 \n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da Área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos Turístico: \n");
    scanf("%d", &pontoturistico2);

    // -----  Visualizar dados da carta 1

    printf("\nCarta 1\n");
    printf("Estado: %s\nCodigo da carta: %s\n Nome da cidade: %s\nNumero da populacao: %d\n", estado1, codigo1, cidade1, populacao1);
    printf("Area em km²: %.2fKM²\nNumero do PIB: %.2f\nNumero de pontos turísticos: %d\n", area1, pib1, pontoturistico1);

    // -----  Visualizar dados da carta 2

    printf("\nCarta 2\n");
    printf("Estado: %s\nCódigo da carta: %s\nNome da cidade: %s\nNumero da populacao: %d\n", estado2, codigo2, cidade2, populacao2);
    printf("Area em KM²: %.2fKM²\n Numero do PIB: %.2f\n Numero de pontos turísticos: %d\n", area2, pib2, pontoturistico2);

    return 0;
}
