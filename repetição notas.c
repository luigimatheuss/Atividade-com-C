#include <stdio.h>
#include <locale.h>

int main() {
    int nota, contador = 0, i, media, soma = 0;
    setlocale(LC_ALL, "");

    for (i = 0; i < 100; i++) {
        printf("Digite uma nota (ou um número negativo para sair):\n");
        scanf("%d", &nota);

        if (nota < 0) {
            printf("Número negativo detectado. Saindo do programa.\n");
            break;
        }

        while (nota < 0 || nota > 10) {
            printf("Nota inválida! Digite uma nota entre 0 e 10:\n");
            scanf("%d", &nota);

            if (nota < 0) {
                printf("Número negativo detectado. Saindo do programa.\n");
                break;
            }
        }

        if (nota < 0)
            break;

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;
        printf("A média das notas é de %d.\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}

