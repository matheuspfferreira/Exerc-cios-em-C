// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char primeiroAutor[50], segundoAutor[50], 
    tresCaracteres[4], nomesConcatenados[54];
    
    // Entradas e saídas
    printf("Informe o nome do primeiro autor: ");
    gets(primeiroAutor);
    printf("Informe o nome do segundo autor: ");
    gets(segundoAutor);
    
    // Realizando a manipulação
    strncat(tresCaracteres, segundoAutor, 3);
    strcpy(nomesConcatenados, primeiroAutor);
    strcat(nomesConcatenados, " ");
    strcat(nomesConcatenados, tresCaracteres);

    // Fim da execução
    printf("Nomes concatenados: %s", nomesConcatenados);
    return 0;
}