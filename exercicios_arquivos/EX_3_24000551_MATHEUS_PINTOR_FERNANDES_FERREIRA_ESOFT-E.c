// Importa��o de bibliotecas
#include <stdio.h>

// Execu��o do programa
int main() {
	
	// Declara��o de vari�veis
	int continuar = 1;	
	
	// Manipula��o dos arquivos
	while (continuar) {
		
		// Declara��o de vari�veis
		FILE *arquivo;
		char nomeArquivo[30];
		
		// Perguntando um nome
		printf("Informe um nome de arquivo (com a extensao): ");
		gets(nomeArquivo);
		
		// Verificando o arquivo
		arquivo = fopen(nomeArquivo, "r");
		if (arquivo == NULL) {
			printf("Arquivo nao encontrado \n");
		} else {
			printf("Arquivo encontrado \n");
		} fclose(arquivo);
		
	}
	
	// Fim da execu��o
	return 0;
		
}
