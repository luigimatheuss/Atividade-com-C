#include <stdio.h>

float Inflacionar(float preco) {
	float novopreco;
	novopreco = preco < 100 ? preco * 1.1 : preco * 1.2;
	
	return novopreco;
}
int main () {
	float preco, resultado;
	
	printf("digite o preço:\n");
	scanf("%f", &preco);
	
	resultado = Inflacionar(preco);
	
	printf("o valor inflacionado é de : %.2f\n", resultado);
	
	return 0;
}
