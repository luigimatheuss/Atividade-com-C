#include <stdio.h>

int main() {
	float salario_usuario, salario_minimo;
    float quantidade_salarios;

    // Definindo o valor do salário mínimo
    salario_minimo = 1412.00;

    // Solicita ao usuário que insira o valor do seu salário
    printf("Digite o valor do seu salario: R$ ");
    scanf("%f", &salario_usuario);

    // Calcula quantos salários mínimos o usuário ganha
    quantidade_salarios = salario_usuario / salario_minimo;

    // Imprime o resultado na tela
    printf("Voce ganha %.2f salarios minimos.\n", quantidade_salarios);

    return 0;
    
	
	
	
	
	
	
}
