#include <stdio.h>

int main() {
	 int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
       
	    printf("%d eh um numero par.\n", numero);
	    
    } else {
    	
    	printf("%d eh um numero impar.\n", numero);
    
	}
    
	
	
	
	
	
	
}
