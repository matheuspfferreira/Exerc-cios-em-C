// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char primeiroLivro[50], segundoLivro[50];
    int quatroCaracteresIguais;
    
    // Entradas e saídas
    printf("Informe o nome do primeiro livro: ");
    gets(primeiroLivro);
    printf("Informe o nome do segundo livro: ");
    gets(segundoLivro);
    quatroCaracteresIguais = strncmp(primeiroLivro, segundoLivro, 4);
    
    // Realizando a comparação
    if (!quatroCaracteresIguais) {
        printf("Os quatro primeiros caracteres de ambos sao iguais");
    } else {
        switch (quatroCaracteresIguais) {
            case -8:
                printf("%s vem antes de %s", primeiroLivro, segundoLivro);
                break;
            case 8:
                printf("%s vem antes de %s", segundoLivro, primeiroLivro);
                break;
        }
    }
    
    // Fim da execução
    return 0;
    
}