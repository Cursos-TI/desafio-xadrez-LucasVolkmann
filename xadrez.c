#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void move(int totalMoveSteps, char direction[30]) {
    if (totalMoveSteps > 0) {
        printf(direction);
        move(totalMoveSteps - 1, direction);
    };
}

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    const int bishopMove = 5;
    const int towerMove = 5;
    const int queenMove = 8;

    const int horseFirstStepMove = 2;
    const int horseSecondStepMove = 1;

    printf("Movimento do bispo: \n");
    move(bishopMove, "Cima Direita\n");


    printf("\nMovimento da torre:\n");
    move(towerMove, "Direita\n");


    printf("\nMovimento da rainha: \n");
    move(queenMove, "Esquerda\n");


    printf("\nMovimento do cavalo: \n");
    for (int j = 0, i = 0; j < horseFirstStepMove; j++) {
        printf("Cima\n");
        while (j + 1 >= horseFirstStepMove && (i++ < horseSecondStepMove)) {
            printf("Direita\n");
        }
    }

    printf("\nMovimento do bispo (com loops aninhados): \n");
    for (int j = 0, i = 0; j < bishopMove; j++, i = 0) {
        printf("Baixo\n");
        while (i++ < 1) {
            printf("Direita\n");
        }
    }

    return 0;
}
