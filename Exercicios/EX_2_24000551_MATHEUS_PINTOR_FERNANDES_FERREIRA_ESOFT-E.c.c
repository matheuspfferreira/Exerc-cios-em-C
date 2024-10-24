// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char palavraLida[50], palavraCopiada[50] = "";
    
    // Entradas e saídas
    printf("Informe o nome da biblioteca: ");
    gets(palavraLida);
    strcpy(palavraCopiada, palavraLida);

    // Fim da execução
    printf("Em uma nova variavel: %s", palavraCopiada);
    return 0;
}