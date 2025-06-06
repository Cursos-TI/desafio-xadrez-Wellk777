#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função para simular a movimentação do Bispo
void moverBispo(int linhaInicial, int colunaInicial, int casas) {
    printf("Movimentação do Bispo a partir de (%d, %d) por %d casas:\n", linhaInicial, colunaInicial, casas);
    // Movimento diagonal superior-direita
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial + i, colunaInicial + i);
    }
    // Movimento diagonal superior-esquerda
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial + i, colunaInicial - i);
    }
    // Movimento diagonal inferior-direita
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial - i, colunaInicial + i);
    }
    // Movimento diagonal inferior-esquerda
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial - i, colunaInicial - i);
    }
}

// Função para simular a movimentação da Torre
void moverTorre(int linhaInicial, int colunaInicial, int casas) {
    printf("Movimentação da Torre a partir de (%d, %d) por %d casas:\n", linhaInicial, colunaInicial, casas);
    // Movimento para a direita
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial, colunaInicial + i);
    }
    // Movimento para a esquerda
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial, colunaInicial - i);
    }
    // Movimento para cima
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial + i, colunaInicial);
    }
    // Movimento para baixo
    for (int i = 1; i <= casas; i++) {
        printf("  (%d, %d)\n", linhaInicial - i, colunaInicial);
    }
}

// Função para simular a movimentação da Rainha
void moverRainha(int linhaInicial, int colunaInicial, int casas) {
    printf("Movimentação da Rainha a partir de (%d, %d) por %d casas:\n", linhaInicial, colunaInicial, casas);
    // A Rainha combina os movimentos do Bispo e da Torre
    moverBispo(linhaInicial, colunaInicial, casas);
    moverTorre(linhaInicial, colunaInicial, casas);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int CASAS_BISPO = 3;
    const int CASAS_TORRE = 4;
    const int CASAS_RAINHA = 5;

    // Implementação de Movimentação do Bispo
    moverBispo(4, 4, CASAS_BISPO);

    // Implementação de Movimentação da Torre
    moverTorre(3, 3, CASAS_TORRE);

    // Implementação de Movimentação da Rainha
    moverRainha(5, 5, CASAS_RAINHA);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
