// Importa��o de bibliotecas
#include <stdio.h>

// Execu��o do programa
int main() {
	
	// Declara��o de vari�veis
	FILE *arquivo;
	
	// Cria��o e manipula��o do arquivo
	arquivo = fopen("meuarquivo.txt", "r");
	char linhas[100];
	while (fgets(linhas, sizeof(linhas), arquivo) != NULL) {
		printf("%s", linhas);
	} fclose(arquivo);
	
	// Fim da execu��o
	return 0;
		
}
