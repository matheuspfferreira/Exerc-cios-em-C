#include <stdio.h>

int main() {
	
	// Declaração de variáveis
	int tabelaNumeros[3][3], i, j, numero;
	
	// Preenchendo a matriz
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			
			// Entradas e saídas
			printf("Informe o %do. numero da %da. linha: ", j+1, i+1);
			scanf("%d", &numero);
			tabelaNumeros[i][j] = numero;
			
		}	
	}
	
	// Exibindo a matriz
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			numero = tabelaNumeros[i][j];
			printf("%d \n", numero);			
		}	
	}
	
	return 0;
	
}
