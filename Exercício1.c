#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    
    printf("Ordem normal: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

  
    printf("Ordem inversa: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
