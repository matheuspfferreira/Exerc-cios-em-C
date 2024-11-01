// Importação de bibliotecas
#include <stdio.h>

// Declaração de constantes
#define QUANTIDADE_NUMEROS 5

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int numeros[QUANTIDADE_NUMEROS], variavelControle;
    
    // Entradas e saídas
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        
        // Solicitando o número
        int numero;
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        numeros[i] = numero;
        
        // Realizando a verificação
        for (int j = 0; j < i; j++) {
            if (numeros[j] > numeros[i]) {
                variavelControle = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = variavelControle;
            }
        }
    }
    
    // Exibindo a sequência
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        printf("%d \n", numeros[i]);
    }

    // Fim da execução
    return 0;
    
}