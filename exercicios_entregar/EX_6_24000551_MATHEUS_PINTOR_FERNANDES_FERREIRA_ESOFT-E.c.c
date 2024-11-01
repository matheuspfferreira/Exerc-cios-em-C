// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int sequenciaNumeros[10], numero, numeroProcurado, achou; 
    
    // Entradas e saídas
    for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        sequenciaNumeros[i] = numero;
    }
    
    // Buscando um número
    printf("Informe um numero para ser procurado: ");
    scanf("%d", &numeroProcurado);
    for (int i = 0; i < 10; i++) {
        numero = sequenciaNumeros[i];
        achou = numeroProcurado == numero;
        if (achou) {
            printf("O numero %d foi encontrado", numeroProcurado);
            return 0;
        }
    } printf("O numero %d nao foi encontrado", numeroProcurado);
    // Fim da execução
    return 0;
    
}
