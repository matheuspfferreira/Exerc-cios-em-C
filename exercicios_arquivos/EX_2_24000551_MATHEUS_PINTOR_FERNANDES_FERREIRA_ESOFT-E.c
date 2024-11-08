// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
	
	// Declaração de variáveis
	FILE *arquivo;
	
	// Criação e manipulação do arquivo
	arquivo = fopen("meuarquivo.txt", "r");
	char linhas[100];
	while (fgets(linhas, sizeof(linhas), arquivo) != NULL) {
		printf("%s", linhas);
	} fclose(arquivo);
	
	// Fim da execução
	return 0;
		
}
