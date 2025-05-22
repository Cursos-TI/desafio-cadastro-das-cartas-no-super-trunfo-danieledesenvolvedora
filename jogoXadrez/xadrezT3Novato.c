#include <stdio.h>

//Jogo Desafio Xadrez Novato

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

    return 0;
}


// 5 direita 
// 5 cima direita 
// 8 esquerda

// Feito - ok