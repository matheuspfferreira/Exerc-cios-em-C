// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int sequenciaNumeros[10];
    
    // Entradas e saídas
    for (int i = 0; i < 10; i++) {
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &sequenciaNumeros[i]);
    }
    
    // Exibindo a sequência
    for (int i = 0; i < 10; i++) {
        printf("%d \n", sequenciaNumeros[i]);
    }
    
    // Fim da execução
    return 0;
    
}