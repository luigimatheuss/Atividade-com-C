#include <stdio.h>
#include <locale.h>

// Fun��o para calcular a m�dia de dois n�meros
float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

// Fun��o para exibir uma mensagem com a m�dia
void mostrarMensagemMedia(float num1, float num2) {
    float media = calcularMedia(num1, num2);
    printf("A m�dia de %.2f e %.2f � %.2f\n", num1, num2, media);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float numero1, numero2;

    printf("Digite dois n�meros: ");
    scanf("%f %f", &numero1, &numero2);

    // Chama a fun��o para exibir a mensagem com a m�dia
    mostrarMensagemMedia(numero1, numero2);

    return 0;
}
