// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int sequenciaNumeros[10], numero, soma = 0;
    
    // Entradas e saídas
    for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        sequenciaNumeros[i] = numero;
        soma += numero;
    }
    
    // Fim da execução
    printf("Soma dos elementos do vetor: %d", soma);
    return 0;
    
}