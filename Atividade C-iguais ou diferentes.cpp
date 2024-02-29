#include <stdio.h>
#include <string.h>

int main() {
	int idade;
    char obrigado_votar; // 'S' para sim, 'N' para não

    // Solicita ao usuário que insira a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verifica se a pessoa é obrigada a votar usando operações lógicas
    if (idade >= 18 && idade <= 65) {
        obrigado_votar = 'S';
    } else {
        obrigado_votar = 'N';
    }

    // Imprime o resultado na tela
    if (obrigado_votar == 'S') {
        printf("Voce e obrigado a votar.\n");
    } else {
        printf("Voce nao e obrigado a votar.\n");
    }

    return 0;
    
	
	
	
	
	
	
}
