#include <stdio.h>

int main() {
    int numeros[20];
    int i;
    int maior, menor;
    int soma = 0;
    int pares = 0;
    int impares = 0;
    float media;

 
    for (i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    
    maior = numeros[0];
    menor = numeros[0];

    
    for (i = 0; i < 20; i++) {

     
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

    
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        
        soma = soma + numeros[i];

       
        if (numeros[i] % 2 == 0) {
            pares = pares + 1;
        } else {
            impares = impares + 1;
        }
    }

    
    media = (float) soma / 20;

 
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
