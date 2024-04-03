#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	int numero , quantnumpos = 0 , quantnumneg = 0, quantnum;
	int pares = 0 , impares = 0;
	
	do {
		printf("digite números inteiro: (digite 0 pra sair)\n");
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
	    printf("quantidade de números inseridos: %d\n", quantnum);
	    printf("quantidade de números positivos: %d\n",quantnumpos);
	    printf("quantidade de números negativos: %d\n", quantnumneg);
	    printf("quantidade de números pares: %d\n", pares);
	    printf("quantidade de números ímpares: %d\n", impares);
	    
	    
	    return 0;
	
	  
}
