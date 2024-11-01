// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    primeiroVetor[10], segundoVetor[10], numero, somasNumeros[10];

    // Entradas e saídas
    for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero do primeiro vetor: ", i+1);
        scanf("%d", &numero); 
        primeiroVetor[i] = numero;
    } for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero do segundo vetor: ", i+1);
        scanf("%d", &numero); 
        segundoVetor[i] = numero;
    }
    
    // Somando os números
    for (int i = 0; i < 10; i++) {
        numero = primeiroVetor[i] + segundoVetor[i]
        somasNumeros[i] = numero;
        printf("Soma dos elementos da %do. posicao: ", i+1);
    }
    
    // Fim da execução
    return 0;
    
}
