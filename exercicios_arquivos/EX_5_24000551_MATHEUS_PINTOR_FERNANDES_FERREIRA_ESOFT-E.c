// Importa��o de bibliotecas
#include <stdio.h>
#define TOTAL_NUMEROS 10

// Execu��o do programa
int main() {
	
	// Declara��o de vari�veis
	int sequenciaNumeros[10], arquivoExiste, soma = 0;
	FILE *arquivo;
	
	// Escrevendo no arquivo
	arquivo = fopen("numeros.txt", "r");
	
	// Verificando se o arquivo existe
	arquivoExiste = arquivo != NULL;
	if (!arquivoExiste) {
		printf("Arquivo de numeros nao existe");
		return 0;
	}
	
	// Lendo os n�meros
	char linhas[100];
	while (fgets(linhas, sizeof(linhas), arquivo) != NULL) {
		soma += fgets(linhas, sizeof(linhas), arquivo);
	}
	
	// Fim da execu��o
	printf("Soma: %d", soma);
	fclose(arquivo);
	return 0;
		
}
