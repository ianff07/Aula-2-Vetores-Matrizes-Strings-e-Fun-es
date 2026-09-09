#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int menor(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

float media(float a, float b) {
    return (a + b) / 2;
}

int fatorial(int n) {
    int resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int num1, num2;
    int numFatorial;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Maior: %d\n", maior(num1, num2));
    printf("Menor: %d\n", menor(num1, num2));
    printf("Media: %.2f\n", media(num1, num2));

    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%d", &numFatorial);

    printf("Fatorial de %d: %d\n", numFatorial, fatorial(numFatorial));

    return 0;
}
