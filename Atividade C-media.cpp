#include <stdio.h>

int main() {
	char nome[200];
	int idade;
	float nota1 , nota2 , nota3 , media;
	
	printf("digite seu nome:\n");
	scanf ("%c",&nome);
	
	printf("digite sua idade:\n");
	fflush(stdin);
	scanf ("%i",&idade);
	
	printf("digite sua primeira nota:\n");
	fflush(stdin);
	scanf ("%f",&nota1);
	
	printf("digite sua segunda nota:\n");
	fflush(stdin);
	scanf ("%f",&nota2);
	
	printf("digite sua terceira nota:\n");
	fflush(stdin);
	scanf ("%f",&nota3);
	
	media = (nota1 + nota2 + nota3) /3;
	
	printf("=== senai resultados ===");
	printf("Nome: %c\n", nome);
	printf("Idade: %i\n", idade);
	printf("Primeira nota: %.1f\n", nota1);
	printf("Segunda nota: %.1f\n", nota2);
	printf("Terceira nota: %.1f\n", nota3);
	printf("Media: %.1f\n", media);
	
	return 0;
	
	
	
	
	
}
