// Importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Execução do programa
int main()
{
    
    // Declaração de variáveis
    char primeiroAutor[100], segundoAutor[100];
    int nomesIguais;
    
    // Entradas e saídas
    printf("Informe o nome do primeiro autor: ");
    scanf("%s", primeiroAutor);
    printf("Informe o nome do segundo autor: ");
    scanf("%s", segundoAutor);
    nomesIguais = strcmp(primeiroAutor, segundoAutor);
    printf("%d", nomesIguais);
    
    // Realizando as verificações
    if (!nomesIguais) {
        printf("Os nomes sao iguais");
    } else {
        switch (nomesIguais) {
            case -3:
                printf("O %s vem antes de %s", primeiroAutor, segundoAutor);
                break;
            case 3:
                printf("O %s vem antes de %s", segundoAutor, primeiroAutor);
        }
    }

    // Fim da execução
    return 0;
}