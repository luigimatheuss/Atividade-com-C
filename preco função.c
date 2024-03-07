#include <stdio.h>

float Inflacionar(float preco) {
	float novopreco;
	if(preco < 100) {
	novopreco = preco * 1.1;
	} else {
	novopreco = preco * 1.2;
	}
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
