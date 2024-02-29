#include <stdio.h>

int main() {
    int i;

    printf("Números ímpares entre 1 e 20:\n");


    for(i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i); // Imprime o número ímpar
        }
    }

    return 0;
}
