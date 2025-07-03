#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    const int bishopMove = 5;
    const int towerMove = 5;
    const int queenMove = 8;

    const int horseFirstStepMove = 2;
    const int horseSecondStepMove = 1;

    int i;


    printf("Movimento do bispo: \n");
    for(i = 0; i < bishopMove; i++) {
        printf("Cima Direita\n");
    }


    printf("\nMovimento da torre:\n");
    i = 0;
    while(i++ < towerMove) {
        printf("Direita\n");
    }


    printf("\nMovimento da rainha: \n");
    i = 0;
    do {
        printf("Esquerda\n");
    } while(i++ < queenMove);


    printf("\nMovimento da torre: \n");
    i = 0;
    for (int j = 0; j < horseFirstStepMove; j++) {
        printf("Baixo\n");
        while (j + 1 >= horseFirstStepMove && (i++ < horseSecondStepMove)) {
            printf("Direita\n");
        }
    }

    return 0;
}
