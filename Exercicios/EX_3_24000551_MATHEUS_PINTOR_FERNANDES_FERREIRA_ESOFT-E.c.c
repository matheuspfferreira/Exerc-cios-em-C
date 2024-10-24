// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char primeiraString[50], segundaString[50], nomeSobrenome[100] = "";
    
    // Entradas e saídas
    printf("Informe o nome do autor: ");
    gets(primeiraString);
    printf("Informe o ultimo sobrenome do autor: ");
    gets(segundaString);
    strcat(nomeSobrenome, primeiraString);
    strcat(nomeSobrenome, " ");
    strcat(nomeSobrenome, segundaString);

    // Fim da execução
    printf("Nome do autor: %s", nomeSobrenome);
    return 0;
}