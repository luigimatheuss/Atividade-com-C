#include <stdio.h>

int main() {
    int numeros[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int i;

    printf("Digite 5 n�meros inteiros:\n");

    // Recebendo os n�meros
    for (i = 0; i < 5; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificando se � par ou �mpar
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Verificando se � positivo ou negativo
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    // Exibindo as informa��es
    printf("\nQuantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);
    printf("Quantidade de n�meros positivos: %d\n", positivos);
    printf("Quantidade de n�meros negativos: %d\n", negativos);
    printf("Total de n�meros inseridos: %d\n", i);

    return 0;
}

