#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	int numero , quantnumpos = 0 , quantnumneg = 0, quantnum;
	int pares = 0 , impares = 0;
	
	do {
		printf("digite n�meros inteiro: (digite 0 pra sair)\n");
		scanf("%d", &numero);
		if (numero != 0) {
			quantnum++;
			
		}if (numero > 0) {
	    	quantnumpos;
		}else {
			quantnumneg;
		}
		
		if (numero % 2 == 0) {
			pares++;
		}else {
			impares++;
		}
	   
	}while(numero != 0);
	    
	    printf("===exibindo resultados===");
	    printf("quantidade de n�meros inseridos: %d\n", quantnum);
	    printf("quantidade de n�meros positivos: %d\n",quantnumpos);
	    printf("quantidade de n�meros negativos: %d\n", quantnumneg);
	    printf("quantidade de n�meros pares: %d\n", pares);
	    printf("quantidade de n�meros �mpares: %d\n", impares);
	    
	    
	    return 0;
	
	  
}
