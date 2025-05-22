#include <stdio.h>
// Jogo Desafio Xadrez Aventureiro

int main()
{

    // Movimento do jogo peça Torre
    printf(" \nTorre se Movimentando \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita \n");
    }

    // Movimento do jogo peça Bispo
    printf(" \nBispo se Movimentando \n");

    int bd = 0, be = 0;
    while (bd < 5)
    {
        while (be < 5)
        {
            printf("Cima Direita\n");
            be++;
        }

        printf("Cima Esquerda\n");
        bd++;
    }

    // Movimento do jogo peça Rinha
    printf("\nRainha se Movimentando \n");
    int rainha = 0;
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\n--------------------------------------\n");

    // Movimento do jogo peça Cavalo
    printf(" \nEscolha o Movimentando do Cavalo\n");

    // int movimento = 1;

    // while (movimento--)
    // {
    //     for (int i = 0; i < 2; i++)
    //     {
    //         printf("Cima\n");
    //     }
    //     printf("Direita\n");
    //     // movimento++;
    // }

    //---------------------------------------------------
    printf("[1] - Mover 2 casa pra Cima e uma Casa há Direita\n");
    printf("[2] - Mover 2 casa pra Baixo e uma Casa há Esquerda\n");

    int escolha1;
    scanf("%d", &escolha1);

    if (escolha1 < 1 || escolha1 > 2)
    {
        printf("--Opção Invalida!--");
    }
    else
    {
        switch (escolha1)
        {
        case 1:
            int movimento = 1;
            while (movimento--)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
                // movimento++;
            }
            break;

        case 2:
            int movimento2 = 1;

            while (movimento2--)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
                movimento++;
            }
            break;
        }
    }

    return 0;
}

// pronto ok