#include <stdio.h>

int main() {
	int A , B , soma , subt , multi , divis;
	
	printf("digite o valor para A:\n");
	scanf("%i", &A);
	
	printf("Digite o valor para B:\n");
	scanf("%i", &B);
	
	soma = A + B;
	subt = A - B;
	multi = A * B;
	divis = A / B;
	   
	printf("\n=== resultados ===\n");
	printf("Valor de A: %i.\n", A);
	printf("Valor de B: %i.\n", B);
	printf("Soma: %i.\n", soma);
	printf("Subtra��o: %i.\n", subt);
	printf("Multiplica��o: %i.\n", multi);
	printf("Divis�o: %i.\n", divis);
	
	
	
	
}
