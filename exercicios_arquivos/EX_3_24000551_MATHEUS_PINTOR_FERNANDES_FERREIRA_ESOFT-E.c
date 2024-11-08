// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
	
	// Declaração de variáveis
	int continuar = 1;	
	
	// Manipulação dos arquivos
	while (continuar) {
		
		// Declaração de variáveis
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
	
	// Fim da execução
	return 0;
		
}
