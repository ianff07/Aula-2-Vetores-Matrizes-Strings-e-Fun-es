#include <stdio.h>

int main() {
    int numeros[15];
    int i;
    int numeroProcurado;
    int encontrado = 0;
    int posicao = -1;

    for (i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &numeroProcurado);

    for (i = 0; i < 15; i++) {
        if (numeros[i] == numeroProcurado) {
            encontrado = 1;
            posicao = i;
        }
    }

    if (encontrado == 1) {
        printf("Numero encontrado na posicao %d\n", posicao);
    } else {
        printf("Numero nao encontrado\n");
    }

    return 0;
}
