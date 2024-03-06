#include <stdio.h>
#include <locale.h>

// Função para calcular a média de dois números
float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

// Função para exibir uma mensagem com a média
void mostrarMensagemMedia(float num1, float num2) {
    float media = calcularMedia(num1, num2);
    printf("A média de %.2f e %.2f é %.2f\n", num1, num2, media);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float numero1, numero2;

    printf("Digite dois números: ");
    scanf("%f %f", &numero1, &numero2);

    // Chama a função para exibir a mensagem com a média
    mostrarMensagemMedia(numero1, numero2);

    return 0;
}
