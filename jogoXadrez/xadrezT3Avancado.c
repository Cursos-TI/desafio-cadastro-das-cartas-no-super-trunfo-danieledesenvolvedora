#include <stdio.h>

// Jogo Desafio Xadrez Avançado.


// Movimento do jogo peça Torre

void movTorre(int numero) // 5 casa pra direita
{
    if (numero > 0)
    {
        printf("Direita\n");

        movTorre(numero - 1);
    }

    //  BISPO-------------------------------
}

void movbispo(int bispo)
{
    // 5 casa diagonal direita pra cima

    if (bispo > 0)
    {

        movbispo(bispo - 1);
        printf("Direita Cima \n");
    }
}

// rainha 8 casa para esquerda
void movRainha(int movR)
{
    // 5 casa diagonal direita pra cima

    if (movR > 0)
    {

        movRainha(movR - 1);
        printf("Esquerda \n");
    }
}
// cavalo 1 pra cima e pra dirteita
//

int main()
{
    // --------TORRE---------------------------------
    printf("------------------------------------\nMovimento da TORRE\n");
    movTorre(5);

    // int quantidade = 6;

    printf("------------------------------------\nMovimento do BISPO\n");
    movbispo(5);

    printf("------------------------------------\nMovimento da RAINHA\n");
    movRainha(8);

    // Movimento do jogo peça Cavalo.
    printf("___________________________________\nMovimento do CAVALO\n");

    int movimento = 1, i = 1;

    while (movimento <= 1)
    {

        while (i <= 2)
        {
            printf("Cima\n");
            i++;
        }
        printf("Direita\n");
        movimento++;
    }

    return 0;
}


// Terminado ok
