#include <stdio.h>

#define QUANTIDADE_NOMES 3
#define TOTAL_CARACTERES 30

int main() {
	
	// Declaração de variáveis
	char nomes[QUANTIDADE_NOMES][TOTAL_CARACTERES], sobrenomes[QUANTIDADE_NOMES][TOTAL_CARACTERES];
	int i, j;
	
	// Preenchendo a primeira matriz
	for (i = 0; i < QUANTIDADE_NOMES; i++) {
		
		// Entradas e saídas
		printf("Informe o %do. nome: ", i+1);
		gets(nomes[i]);
		
	} printf("Agora, os sobrenomes. \n");
	
	// Preenchendo a segunda matriz
	for (i = 0; i < QUANTIDADE_NOMES; i++) {
		
		// Entradas e saídas
		printf("Informe o %do. sobrenome: ", i+1);
		gets(sobrenomes[i]);
		
	}
	
	// Exibindo a primeira matriz
	for (i = 0; i < QUANTIDADE_NOMES; i++) {
		printf("%s \n", nomes[i]);	
	}
	
	// Exibindo a segunda matriz
	for (i = 0; i < QUANTIDADE_NOMES; i++) {
		printf("%s \n", sobrenomes[i]);	
	}
	
	return 0;
	
}
