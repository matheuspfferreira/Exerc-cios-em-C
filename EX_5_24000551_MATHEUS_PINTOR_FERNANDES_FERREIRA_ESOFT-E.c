#include <stdio.h>

int main() {
	
	// Declaração de variáveis
	int primeirosNumeros[3][3], segundosNumeros[3][3], matrizMultiplicada[3][3], i, j, numero, soma;
	
	// Preenchendo a primeira matriz
	printf("Primeiro, preencha a primeira matriz. \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			
			// Entradas e saídas
			printf("Informe o %do. numero da %da. linha: ", j+1, i+1);
			scanf("%d", &numero);
			primeirosNumeros[i][j] = numero;
			
		}
	}
	
	// Preenchendo a segunda matriz
	printf("Agora, a segunda matriz. \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			
			// Entradas e saídas
			printf("Informe o %do. numero da %da. linha: ", j+1, i+1);
			scanf("%d", &numero);
			segundosNumeros[i][j] = numero;
			
		}
	}
	
	// Formando a terceira matriz
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			soma += primeiraMatriz[i][j] * segundaMatriz[j][i]
		}
	}
	
	// Exibindo a terceira matriz
	printf("Uma terceira matriz, sendo a multiplicacao das duas matrizes. \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			numero = matrizMultiplicada[i][j];
			printf("%d \n", numero);
		}
	}
	
	return 0;
	
}
