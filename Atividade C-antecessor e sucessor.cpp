#include <stdio.h>

int main() {
	int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula e mostra o antecessor
    printf("O antecessor de %d eh: %d\n", numero, numero - 1);

    // Calcula e mostra o sucessor
    printf("O sucessor de %d eh: %d\n", numero, numero + 1);

    return 0;
    
	
	
	
	
	
	
}
