#include <stdio.h>
#include <locale.h>

// Fun��o para realizar a soma de dois n�meros
float soma(float num1, float num2) {
    return num1 + num2;
}

// Fun��o para realizar a subtra��o de dois n�meros
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Fun��o para realizar a divis�o de dois n�meros
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: divis�o por zero!\n");
        return 0;
    }
}

// Fun��o para realizar a multiplica��o de dois n�meros
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

int main() {
    float numero1, numero2;

    printf("Digite dois n�meros: ");
    scanf("%f %f", &numero1, &numero2);

    // Chama as fun��es para realizar as opera��es
    printf("Soma: %.2f\n", soma(numero1, numero2));
    printf("Subtra��o: %.2f\n", subtracao(numero1, numero2));
    
    // Verifica se o segundo n�mero � diferente de zero antes de fazer a divis�o
    if (numero2 != 0) {
        printf("Divis�o: %.2f\n", divisao(numero1, numero2));
    } else {
        printf("Divis�o n�o pode ser realizada (divis�o por zero).\n");
    }
    
    printf("Multiplica��o: %.2f\n", multiplicacao(numero1, numero2));

    return 0;
}
