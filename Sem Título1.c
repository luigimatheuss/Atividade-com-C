#include <stdio.h>

int main() {
    int i;

    printf("N�meros �mpares entre 1 e 20:\n");


    for(i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i); // Imprime o n�mero �mpar
        }
    }

    return 0;
}
