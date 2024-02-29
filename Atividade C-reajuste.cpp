#include <stdio.h>

int main() {
	float valor_original, valor_reajustado;
    float taxa_reajuste = 0.10; // 10%

    // Solicita ao usuário que insira um valor
    printf("Digite um valor qualquer: ");
    scanf("%f", &valor_original);

    // Calcula o valor reajustado
    valor_reajustado = valor_original * (1 + taxa_reajuste);

    // Mostra o valor reajustado na tela
    printf("O valor com reajuste de 10%% eh: %.2f\n", valor_reajustado);

    return 0;
	
	
	
	
	
	
}
