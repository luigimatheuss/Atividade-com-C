#include <stdio.h>
#include <string.h>

int main() {
	int quantidade_maca;
    float custo_total;

    // Solicita ao usu�rio que insira o n�mero de ma��s compradas
    printf("Digite o numero de macas compradas: ");
    scanf("%d", &quantidade_maca);

    // Verifica se a quantidade de ma��s compradas � menor que 12
    if (quantidade_maca < 12) {
        custo_total = quantidade_maca * 1.30; // Custo de cada ma�� � R$ 1,30
    } else {
        custo_total = quantidade_maca * 1.00; // Custo de cada ma�� � R$ 1,00
    }

    // Imprime o custo total da compra
    printf("O custo total da compra eh: R$ %.2f\n", custo_total);

    return 0;
    
	
	
	
	
	
	
}
