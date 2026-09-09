#include <stdio.h>

int main() {
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizSoma[3][3];
    int i, j;

    printf("Digite os 9 numeros da matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os 9 numeros da matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMatriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Soma (A + B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
