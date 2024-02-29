#include <stdio.h>

int main() {
	char nome[100];
    int idade;
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que insira o nome, idade e as três notas
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica se o aluno está aprovado ou reprovado
    if (media >= 7.0) {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Média: %.2f\n", media);
        printf("Situação: Aprovado\n");
    } else {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Média: %.2f\n", media);
        printf("Situação: Reprovado\n");
    }

    return 0;
    
	
	
	
	
	
	
}
