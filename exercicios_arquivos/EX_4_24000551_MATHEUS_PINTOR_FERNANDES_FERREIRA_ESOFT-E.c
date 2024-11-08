// Importação de bibliotecas
#include <stdio.h>
#define TOTAL_NUMEROS 10

// Execução do programa
int main() {
	
	// Declaração de variáveis
	int quantidadeNumeros = 1, numero = 1, i, somaMultiplicada = 0;
	FILE *arquivo;
	
	// Escrevendo no arquivo
	arquivo = fopen("numeros.txt", "w");
	
	// Escrevendo os números
	for(i = 1; i <= TOTAL_NUMEROS; i++){
		fprintf(arquivo, "%d", i);	
		fprintf(arquivo, "\n");
		somaMultiplicada += i * 3;
	}
	
	// Fim da execução
	printf("Soma multiplicada por tres: %d", somaMultiplicada);
	return 0;
		
}
