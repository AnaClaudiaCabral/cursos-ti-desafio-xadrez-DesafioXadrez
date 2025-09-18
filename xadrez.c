#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Ana Claudia Cabral
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Aventureiro - Movimentando o Cavalo
    
    int main() {
    // Simulação de Movimentação da Torre - estrutura de repetição for
    printf("Movimento da Torre: \n");
    for(int i = 1; i <= 5; i ++) {
    printf("Direita - \t");
    printf("Torre moveu 1 casa para a Direita (total: %d casas)\n",i);
    } 
    printf("\n");
    
    // Simulação de Movimentação da Bispo - estrutura de repetição while
    printf("Movimento Bispo:\n");
    int j = 1;
    while (j <= 5)
    {
    printf("Cima Direira - \t");
    printf("Bispo moveu 1 casa na diagonal (Cima, Direita) (total: %d casas)\n", j);
    j++;
    }
    printf("\n");

    // Simulação de Movimentação da rainha - estrutura de repetição do-while
    printf("Movimento da Rainha: \n");
    int k = 1;
    do {
    printf("Esquerda - \t");
    printf("Rainha moveu 1 casa para a Esquerda (total: %d casas)\n", k);
    k++;
    } while (k <= 8);
    printf("\n");

    //Simulação de Movimento do Cavalo - usando for e while aninhados
    printf("Movimento do Cavalo: \n");
    int casas_verticais;
    for (casas_verticais = 1; casas_verticais <= 2; casas_verticais++){
    printf("Cima - \t");
    printf("Cavalo moveu 2 casas para cima (total: %d casas)\n", casas_verticais);
    }

    int casas_horizontais = 1;
    while (casas_horizontais <= 1){
    printf("Direita - \t");
    printf("Cavalo moveu 1 casa para a Direita (total: %d casas)\n", casas_horizontais);
    casas_horizontais++;
    }
    printf("\n");
    printf("Novo commit\n");


    

return 0;
}
