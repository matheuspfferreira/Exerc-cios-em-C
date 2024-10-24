// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char palavraLida[50];
    
    // Entradas e saídas
    printf("Informe o nome da biblioteca: ");
    gets(palavraLida);

    // Fim da execução
    printf("Comprimento da palavra: %d", strlen(palavraLida));
    return 0;
}