#include <stdio.h>

#define QUANTIDADE_ALUNOS 5
#define QUANTIDADE_CAMPOS 2

int main() {
	
	// Declaração de variáveis
	float notas[QUANTIDADE_ALUNOS][QUANTIDADE_CAMPOS], notasComparacao[2], nota;
	int indices[2], i, j, codigoAluno;
	
	// Preenchendo a matriz
	for (i = 0; i < QUANTIDADE_CAMPOS; i++) {
		for (j = 0; j < QUANTIDADE_ALUNOS; j++) {
			
			// Entradas e saídas
			if (!i) {
				printf("Informe o codigo do %do. aluno: ", j+1);
				scanf("%d", &codigoAluno);
				notas[i][j] = codigoAluno;
			} else {
				printf("Informe a nota do %do. aluno: ", j+1);
				scanf("%f", &nota);
				notas[i][j] = nota;
			}
				
		}
	}
	
	// Atribuições
	notasComparacao[0] = -1;
	notasComparacao[1] = 11;
	
	// Verificando a maior média
	for (j = 0; j < QUANTIDADE_ALUNOS; j++) {
		
		// Comparando a nota
		nota = notas[1][j];
		if (nota > notasComparacao[0]) {
			notasComparacao[0] = nota;
			indices[0] = j;
		} else if (nota < notasComparacao[1]) {
			notasComparacao[1] = nota;
			indices[1] = j;
		}
		
	}
	
	// Exibindo o resultado
	printf("O %do. aluno teve a maior nota com: %.2f \n", indices[0], notasComparacao[0]);
	printf("O %do. aluno teve a menor nota com: %.2f", indices[1], notasComparacao[1]);
	
	return 0;
	
}
