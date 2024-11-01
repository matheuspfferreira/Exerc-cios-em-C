// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int primeiroVetor[11], segundoVetor[10], numero, igual;

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
    
    // Realizando a verificação
    for (int i = 0; i < 10; i++) {
        igual = primeiroVetor[i] == segundoVetor[i];
        if (!igual) {
            printf("Os vetores nao sao iguais");
            return 0;
        } 
    }
    
    // Fim da execução
    printf("Os vetores sao iguais");
    return 0;
    
}