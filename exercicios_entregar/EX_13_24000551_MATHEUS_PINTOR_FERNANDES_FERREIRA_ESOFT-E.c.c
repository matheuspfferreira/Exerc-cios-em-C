// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int quantidadeNotas; 
    float nota, soma = 0;

    // Entradas e saídas
    printf("Informe a quantidade de notas que serao inserida: ");
    scanf("%d", &quantidadeNotas);
    float notas[quantidadeNotas];
    
    // Recolhendo as notas
    for (int i = 0; i < quantidadeNotas; i++) {
        printf("Informe a %da. nota: ", i+1);
        scanf("%f", &nota);
        soma += nota;
    }
    
    // Fim da execução
    printf("Media das notas: %.1f", soma / quantidadeNotas);
    return 0;
    
}