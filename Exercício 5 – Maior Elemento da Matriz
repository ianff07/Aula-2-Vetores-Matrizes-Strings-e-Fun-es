#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int maior;
    int linhaMaior;
    int colunaMaior;

    printf("Digite os 25 numeros da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Linha: %d\n", linhaMaior);
    printf("Coluna: %d\n", colunaMaior);

    return 0;
}
