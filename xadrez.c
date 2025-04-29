#include <stdio.h>

int main()
{
    // Movimento da TORRE - 5 casas para a direita, usando FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++)
    {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal (cima e direita), usando WHILE
    int movimentoBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= movimentoBispo)
    {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda, usando DO-WHILE
    int movimentoRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
