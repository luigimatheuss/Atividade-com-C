#include <stdio.h>
#include <locale.h>

// Função para realizar a soma de dois números
float soma(float num1, float num2) {
    return num1 + num2;
}

// Função para realizar a subtração de dois números
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função para realizar a divisão de dois números
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
}

// Função para realizar a multiplicação de dois números
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

int main() {
    float numero1, numero2;

    printf("Digite dois números: ");
    scanf("%f %f", &numero1, &numero2);

    // Chama as funções para realizar as operações
    printf("Soma: %.2f\n", soma(numero1, numero2));
    printf("Subtração: %.2f\n", subtracao(numero1, numero2));
    
    // Verifica se o segundo número é diferente de zero antes de fazer a divisão
    if (numero2 != 0) {
        printf("Divisão: %.2f\n", divisao(numero1, numero2));
    } else {
        printf("Divisão não pode ser realizada (divisão por zero).\n");
    }
    
    printf("Multiplicação: %.2f\n", multiplicacao(numero1, numero2));

    return 0;
}
