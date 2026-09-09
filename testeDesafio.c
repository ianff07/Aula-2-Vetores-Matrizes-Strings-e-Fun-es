#include <stdio.h>

void inicializarTabuleiro(char tabuleiro[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(char tabuleiro[3][3]) {
    int i, j;

    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("-----------\n");
        }
    }
    printf("\n");
}

int posicaoOcupada(char tabuleiro[3][3], int linha, int coluna) {
    if (tabuleiro[linha][coluna] != ' ') {
        return 1;
    } else {
        return 0;
    }
}

int verificarVencedor(char tabuleiro[3][3], char jogador) {
    int i;

    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return 1;
        }
    }

    for (i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return 1;
        }
    }

    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return 1;
    }

    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return 1;
    }

    return 0;
}

int tabuleiroCheio(char tabuleiro[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    char tabuleiro[3][3];
    char jogadorAtual;
    int linha, coluna;
    int jogoAcabou = 0;

    inicializarTabuleiro(tabuleiro);

    jogadorAtual = 'X';

    while (jogoAcabou == 0) {

        imprimirTabuleiro(tabuleiro);

        printf("Vez do jogador %c\n", jogadorAtual);
        printf("Digite a linha (0 a 2): ");
        scanf("%d", &linha);
        printf("Digite a coluna (0 a 2): ");
        scanf("%d", &coluna);

        if (posicaoOcupada(tabuleiro, linha, coluna) == 1) {
            printf("\nPosicao ja ocupada! Tente novamente.\n");
            continue;
        }
return 0;
