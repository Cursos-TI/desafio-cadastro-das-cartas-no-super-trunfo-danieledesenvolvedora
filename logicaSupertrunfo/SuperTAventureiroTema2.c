#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Variáveis para as cartas.

    char pais1[50], pais2[50];
    int populacao1, populacao2, pontoturistico1, pontoturistico2;
    float area1, area2, pib1, pib2;
    float desidade_demografia1, desidade_demografia2;
    int escolhadeAtributo;

    //------ Cadastro da carta 1

    printf("Digite o País: \n");
    scanf("%s", &pais1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da Área em km²: \n");
    scanf("%f", &area1);

    printf("Qual o valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos Turístico: \n");
    scanf("%d", &pontoturistico1);

    // Calculo Divisão da população por aréa.
    desidade_demografia1 = (float)populacao1 / area1;

    //------ Cadastro da carta 2

    printf("\n");
    printf("Cartas 2 \n");

    printf("Digite o País: \n");
    scanf("%s", &pais2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da Área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos Turístico: \n");
    scanf("%d", &pontoturistico2);

   
    // Calculo Divisão da população por aréa.
    desidade_demografia2 = (float)populacao2 / area2; 


    // -----  Visualizar dados da carta 1

    printf("\nCarta 1\n");
    printf("Nome do País: %s\n Numero da populacao: %d\n", pais1, populacao1);
    printf("Area em km²: %.2fKM²\n Numero do PIB: %.2f\n Numero de pontos turísticos: %d\n Densidade Demografica: %.2f hab/km²\n", area1, pib1, pontoturistico1, desidade_demografia1);

    // -----  Visualizar dados da carta 2

    printf("\nCarta 2\n");
    printf("Nome do País: %s\nNumero da populacao: %d\n", pais2, populacao2);
    printf("Area em KM²: %.2fKM²\n Numero do PIB: %.2f\n Numero de pontos turísticos: %d\n Densidade Demografica: %.2f hab/km²\n", area2, pib2, pontoturistico2, desidade_demografia2);



    // Atributo de comparação 
    printf("\nEscolha um Atributo para Comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhadeAtributo);


    // Menu das cartas
    switch (escolhadeAtributo)
    {
    case 1:
        printf("Atributo de Comparação População\n");
        break;

    case 2:
        printf("Atributo de Comparação Área\n");
        break;

    case 3:
        printf("Atributo de Comparação PIB\n");
        break;

    case 4:
        printf("Atributo de Comparação Número de pontos Turísticos\n");
        break;

    case 5:
        printf("Atributo de Comparação Densidade Demografica\n");
        break;

    default:
        break;
    }


    //comparação dos atributo das cartas.

   
    if (escolhadeAtributo == 1){
        // empate ver

        printf("\nComparação de Atrubutos escolhido! \n ** População! **\n");
        
        if (populacao1 > populacao2) {
            printf("Carta - 1\n");
            printf("País: %s\n", pais1);

            printf("População:  %.2f\n - carta 1  ###Venceu!###\n", (float)populacao1);
        }
        else if (populacao1 < populacao2){
            printf("Carta - 2 \n");
            printf("País: %s\n", pais2);
            printf("População:  %.2f\n - carta 2  ### Venceu ###\n", (float)populacao2);
        } else{
            printf("Houve um empate!");
        }

    }



    return 0;
}



// pronto ok.