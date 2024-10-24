// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char tituloLivro[50], cincoCaracteres[6], tituloCopiado[50];
    
    // Entradas e saídas
    printf("Informe o titulo do livro: ");
    gets(tituloLivro);
    
    // Realizando a manipulação
    strncpy(cincoCaracteres, tituloLivro, 5);
    strcpy(tituloCopiado, cincoCaracteres);

    // Fim da execução
    printf("Cinco primeiros caracteres do titulo: %s", tituloCopiado);
    return 0;
}