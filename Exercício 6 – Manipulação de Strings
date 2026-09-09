#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int i;
    int tamanho;
    int vogais = 0;
    int consoantes = 0;
    int espacos = 0;
    char letra;

    printf("Digite o nome completo: ");
    fgets(nome, 100, stdin);

    tamanho = strlen(nome);

    for (i = 0; i < tamanho; i++) {
        letra = nome[i];

        if (letra == '\n') {
            continue;
        }

        if (letra == ' ') {
            espacos = espacos + 1;
        } else if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
                   letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            vogais = vogais + 1;
        } else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
            consoantes = consoantes + 1;
        }
    }

    printf("\nQuantidade de caracteres: %d\n", tamanho);
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos: %d\n", espacos);

    return 0;
}
