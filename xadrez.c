#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Ana Claudia Cabral
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
    
    int main() {
    // Simulação de Movimentação da Torre - estrutura de repetição for
    printf("Movimento da Torre: \n");
    for(int i = 1; i <= 5; i ++) {
    printf("Torre moveu 1 casa para a Direita (total: %d casas)\n",i);
    } 
    printf("\n");
    
    // Simulação de Movimentação da Bispo - estrutura de repetição while
    printf("Movimento Bispo:\n");
    int j = 1;
    while (j <= 5)
    {
        printf("Bispo moveu 1 casa na diagonal (Cima, Direita) (total: %d casas)\n", j);
        j++;
    }
    printf("\n");

    // Simulação de Movimentação da rainha - estrutura de repetição do-while
    printf("Movimento da Rainha: \n");
    int k = 1;
    do {
        printf("Rainha moveu 1 casa para a Esquerda (total: %d casas)\n", k);
        k++;
    } while (k <= 8);
    printf("\n");
    printf("Novo Commit \n");

           

    return 0;
}
