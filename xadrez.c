#include <stdio.h>

// === Funções Recursivas ===

// Função recursiva para mover a TORRE para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a RAINHA para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função auxiliar para mover o BISPO em uma casa (diagonal cima-direita)
void moverDiagonalRecursiva(int verticais, int horizontais) {
    if (verticais == 0 || horizontais == 0) return;

    // Loop aninhado: primeiro vertical, depois horizontal
    for (int i = 1; i <= verticais; i++) {
        for (int j = 1; j <= horizontais; j++) {
            printf("Cima Direita\n");
            break;  // Simula uma casa na diagonal por chamada
        }
        break;  // Garante que apenas uma casa seja feita por chamada
    }

    moverDiagonalRecursiva(verticais - 1, horizontais - 1);
}

// === Função Principal ===

int main() {
    // === Movimento da TORRE ===
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // === Movimento do BISPO ===
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverDiagonalRecursiva(casasBispo, casasBispo);

    // === Movimento da RAINHA ===
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // === Movimento do CAVALO (duas casas para cima e uma para direita) ===
    printf("\nMovimento do Cavalo:\n");

    int maxMovimentos = 1;  // Simula 1 movimento em L
    for (int movimento = 0; movimento < maxMovimentos; movimento++) {
        int i = 0, j = 0;

        // Loop externo: casas para cima
        for (i = 0; i < 2; i++) {
            if (i == 1) {
                // Ao atingir o segundo passo para cima, iniciamos o movimento para direita
                int direita = 0;
                while (direita < 1) {
                    printf("Direita\n");
                    direita++;
                    break; // controla fluxo, evita loop infinito
                }
            }
            printf("Cima\n");

            if (i == 5) break;  // segurança
        }

        // Extra: simula uma quebra de lógica, mas salta com continue se algo errado
        if (i != 2) {
            printf("Movimento incompleto detectado. Reiniciando...\n");
            continue;
        }
    }

    return 0;
}
