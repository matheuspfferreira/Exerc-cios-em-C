// Importa��o de bibliotecas
#include <stdio.h>

// Execu��o do programa
int main() {
	
	// Declara��o de vari�veis
	FILE *arquivo;
	
	// Cria��o e manipula��o do arquivo
	arquivo = fopen("meuarquivo.txt", "w");
	fprintf(arquivo, "Ola, mundo");
	fclose(arquivo);
	
	// Fim da execu��o
	return 0;
		
}
