#include <stdio.h>

int main() {
    int numeros[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int i;

    printf("Digite 5 números inteiros:\n");

    // Recebendo os números
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificando se é par ou ímpar
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Verificando se é positivo ou negativo
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    // Exibindo as informações
    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Total de números inseridos: %d\n", i);

    return 0;
}

