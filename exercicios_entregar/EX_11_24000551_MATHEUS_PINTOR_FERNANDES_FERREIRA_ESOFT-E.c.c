// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int primeiroVetor[11], segundoVetor[10], numero, operacaoNumeros[10];

    // Entradas e saídas
    for (int i = 0; i < 11; i++) {
        printf("Informe o %do. numero do primeiro vetor: ", i+1);
        scanf("%d", &numero); 
        primeiroVetor[i] = numero;
    } for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero do segundo vetor: ", i+1);
        scanf("%d", &numero); 
        segundoVetor[i] = numero;
    }
    
    // Realizando a operação
    for (int i = 0; i < 10; i++) {
        numero = primeiroVetor[i+1] + segundoVetor[i];
        operacaoNumeros[i];
    }
    
    // Exibindo todos os vetores
    for (int i = 0; i < 10; i++) {
        printf("Primeio vetor na %da. posicao: ", primeiroVetor[i]);
        printf("Segundo vetor na %da. posicao: ", segundoVetor[i]);
        printf("Terceiro vetor na %da. posicao: ", operacaoNumeros[i]);
    }
    
    // Fim da execução
    return 0;
    
}