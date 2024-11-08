// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
	
	// Declaração de variáveis
	FILE *arquivo;
	
	// Criação e manipulação do arquivo
	arquivo = fopen("meuarquivo.txt", "w");
	fprintf(arquivo, "Ola, mundo");
	fclose(arquivo);
	
	// Fim da execução
	return 0;
		
}
