// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int quantidadeNumeros;
    
    // Entradas e saídas
    printf("Informe a quantidade de numeros que serao inseridos: ");
    scanf("%d", &quantidadeNumeros);
    int numeros[quantidadeNumeros], numerosCopia[quantidadeNumeros];
    
    // Recolhendo os números
    for (int i = 0; i < quantidadeNumeros; i++) {
        int numero;
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        numerosCopia[i] = numeros[i] = numero;
    }
    
    // Exibindo o outro vetor
    for (int i = 0; i < quantidadeNumeros; i++) {
        printf("%d \n", numerosCopia[i]);
    }

    // Fim da execução
    return 0;
    
}