#include <stdio.h>
#include <locale.h>

void cabecalho() {
	printf("===senai===\n");
	system("cls");
	fflush(stdin);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota, soma = 0;
	int contador = 0;
	char resposta;

	cabecalho();

	do {
		printf("Digite uma nota: ");
		scanf("%f", &nota);

		soma += nota;
		contador++;

		printf("Deseja inserir outra nota? (s/n): ");
		scanf(" %c", &resposta);

	} while (resposta == 'S' || resposta == 's');

	if (contador > 0) {
		float media = soma / contador;
		printf("A média aritmética das notas inseridas é: %.2f\n", media);
	} else {
		printf("Nenhuma nota foi inserida.\n");
	}

	return 0;
}

