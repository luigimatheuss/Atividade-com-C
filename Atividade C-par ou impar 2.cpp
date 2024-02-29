#include <stdio.h>
#include <string.h>

int main() {
	int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("%d eh um numero par.\n", numero);
    } else {
        printf("%d eh um numero impar.\n", numero);
    }

    return 0;
    
	
	
	
	
	
	
}
