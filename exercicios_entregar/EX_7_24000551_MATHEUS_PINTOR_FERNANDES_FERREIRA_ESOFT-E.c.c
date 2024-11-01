// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int sequenciaNumeros[10], numero, numeroProcurado, achou, aparicoes = 0; 
    
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
            aparicoes++;
        }
    } printf("O numero %d foi encontrado %d vezes", numeroProcurado, aparicoes);
    
    // Fim da execução
    return 0;
    
}