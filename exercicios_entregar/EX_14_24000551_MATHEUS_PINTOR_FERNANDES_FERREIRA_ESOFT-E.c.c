// Importação de bibliotecas
#include <stdio.h>

// Declaração de constantes
#define QUANTIDADE_NUMEROS 10

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int numeros[QUANTIDADE_NUMEROS], quantidadePares = 0, quantidadeImpares = 0;
    
    // Entradas e saídas
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        int numero, par;
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        numeros[i] = numero;
        par = numero % 2 == 0;
        if (par) {
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }
    }

    // Fim da execução
    printf("Quantidade numeros pares: %d \nQuantidade de numeros impares: %d", quantidadePares, quantidadeImpares);
    return 0;
    
}