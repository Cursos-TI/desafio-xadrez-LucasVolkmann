#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int bishopMove = 5;
    const int towerMove = 5;
    const int queenMove = 8;

    int i;

    printf("Bishop Movement\n");
    for(i = 0; i < bishopMove; i++) {
        printf("Cima Direita\n");
    }

    printf("\nTower Movement\n");
    i = 0;
    while(i++ < towerMove) {
        printf("Direita\n");
    }

    printf("\nQueen Movement\n");
    i = 0;
    do {
        printf("Esquerda\n");
    } while(i++ < queenMove);

    return 0;
}
