// Importação de bibliotecas
#include <stdio.h>

// Execução do programa
int main() {
    
    // Declaração de variáveis
    int sequenciaNumeros[10], maiorNumero, menorNumero, numero;
    
    // Resgatando os primeiros números
    printf("Informe o 1o. numero: ");
    scanf("%d", &maiorNumero);
    sequenciaNumeros[0] = menorNumero = maiorNumero;
    
    // Entradas e saídas
    for (int i = 1; i < 10; i++) {
        printf("Informe o %do. numero: ", i+1);
        scanf("%d", &numero);
        sequenciaNumeros[i] = numero;
        if (numero > maiorNumero) {
            maiorNumero = numero;
        } else if (numero < menorNumero) {
            menorNumero = numero;
        }
    }
    
    // Fim da execução
    printf("Maior numero: %d \nMenor numero: %d", maiorNumero, menorNumero);
    return 0;
    
}
