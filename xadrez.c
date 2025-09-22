#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Ana Claudia Cabral
// Nível Mestre - Movimentos Complexos

#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva para mover a próxima casa
    }
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1); // Chamada recursiva
    }
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoAninhado(int casas) {
    // Loop externo para movimento vertical
    for (int i = 0; i < casas; i++) {
        // Loop interno para movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

int main() {
    // Definindo o número de casas a mover
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    // Simulação do movimento da Torre (usando recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(CASAS_TORRE);
    printf("\n");

    // Simulação do movimento do Bispo (usando recursividade)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(CASAS_BISPO);
    printf("\n");

    // Simulação do movimento do Bispo (usando loops aninhados)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoAninhado(CASAS_BISPO);
    printf("\n");

    // Simulação do movimento da Rainha (usando recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // Simulação do movimento do Cavalo (usando loop complexo)
    // Movimento em "L": 2 casas para cima, 1 para a direita.
    printf("Movimento do Cavalo:\n");
    // i controla o movimento para cima, j controla o movimento para a direita
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
        } else if (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    return 0;
}
