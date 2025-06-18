#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moveBishop(int steps) {
    if(steps == 0)
        return;

    printf("Cima\n");
    printf("Direita\n");

    moveBishop(steps - 1);
}

void moveTower(int steps) {
    if(steps == 0)
        return;

    printf("Direita\n");

    moveTower(steps - 1);
}

void moveQueen(int steps) {
    if(steps == 0)
        return;

    printf("Esquerda\n");

    moveQueen(steps - 1);
}

void moveHorse(int steps) {
    for(int step = 0; step < steps; step++) {
        for(int i = 0; i < 2; i++)
            printf("Cima\n");

        int k = 0;
        while (k < 2) {
            k++;

            if(k == 1)
                continue;
            printf("Direita\n");
        }
    }
}

int main() {
    printf("Movimento do Bispo:\n");
    moveBishop(5);
    printf("\n");

    printf("Movimento da Torre:\n");
    moveTower(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moveQueen(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moveHorse(1);

    return 0;
}
