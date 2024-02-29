#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float nota1, nota2, media;
    char conceito;
    
    // Solicita ao usuário que insira o nome do aluno e suas notas
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // Calcula a média das notas
    media = (nota1 + nota2) / 2;
    
    // Determina o conceito
    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    
    // Imprime os resultados na tela
    printf("\nNome do aluno: %s\n", nome);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Media: %.2f\n", media);
    printf("Conceito: %c\n", conceito);
    
    // Verifica se o aluno foi aprovado ou reprovado
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;

    
	
	
	
	
	
	
}
