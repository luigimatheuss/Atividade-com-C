#include <stdio.h>

int main() {
	char nome[100];
    int idade;
    float nota1, nota2, nota3, media;

    // Solicita ao usu�rio que insira o nome, idade e as tr�s notas
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

    // Calcula a m�dia das notas
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica se o aluno est� aprovado ou reprovado
    if (media >= 7.0) {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("M�dia: %.2f\n", media);
        printf("Situa��o: Aprovado\n");
    } else {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("M�dia: %.2f\n", media);
        printf("Situa��o: Reprovado\n");
    }

    return 0;
    
	
	
	
	
	
	
}
