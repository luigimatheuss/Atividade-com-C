#include <stdio.h>
#include <string.h>

int main() {
	int num1, num2;
    int soma, produto, menor, maior;
    float media;

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Calcula a soma
    soma = num1 + num2;

    // Calcula o produto
    produto = num1 * num2;

    // Calcula a média
    media = (float)(soma) / 2;

    // Encontra o menor valor
    menor = (num1 < num2) ? num1 : num2;

    // Encontra o maior valor
    maior = (num1 > num2) ? num1 : num2;

    // Imprime os resultados
    printf("Media: %.2f\n", media);
    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    // Verifica se os números são iguais
    if (num1 == num2) {
        printf("Os numeros informados sao iguais.\n");
    } else {
        printf("Os numeros informados sao diferentes.\n");
    }

    return 0;

    
	
	
	
	
	
	
}
