#include <stdio.h>

int main() {
    int valores[6];
    int i;

    printf("Digite 6 valores inteiros positivos e pares:\n");

    // Recebendo os valores e validando se são inteiros, positivos e pares
    for (i = 0; i < 6; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &valores[i]);

            // Verifica se o valor é positivo e par
            if (valores[i] <= 0 || valores[i] % 2 != 0) {
                printf("O valor precisa ser inteiro, positivo e par. Tente novamente.\n");
            }
        } while (valores[i] <= 0 || valores[i] % 2 != 0);
    }

    // Exibindo os valores na ordem inversa
    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}

