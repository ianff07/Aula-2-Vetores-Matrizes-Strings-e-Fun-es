#include <stdio.h>

#define TAMANHO 5

void lerNotas(float notas[]) {
    int i;

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[]) {
    float soma = 0;
    int i;

    for (i = 0; i < TAMANHO; i++) {
        soma = soma + notas[i];
    }

    return soma / TAMANHO;
}

float encontrarMaiorNota(float notas[]) {
    float maior = notas[0];
    int i;

    for (i = 0; i < TAMANHO; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

float encontrarMenorNota(float notas[]) {
    float menor = notas[0];
    int i;

    for (i = 0; i < TAMANHO; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    return menor;
}

void imprimirRelatorio(float notas[], float media, float maior, float menor) {
    int i;

    printf("\n--- Relatorio da Turma ---\n");

    printf("Notas: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");

    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.1f\n", maior);
    printf("Menor nota: %.1f\n", menor);
}

int main() {
    float notas[TAMANHO];
    float media;
    float maior;
    float menor;

    lerNotas(notas);

    media = calcularMedia(notas);
    maior = encontrarMaiorNota(notas);
    menor = encontrarMenorNota(notas);

    imprimirRelatorio(notas, media, maior, menor);

    return 0;
}
