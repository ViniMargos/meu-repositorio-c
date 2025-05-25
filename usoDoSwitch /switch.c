#include <stdio.h>

int main() {

    int variavel; // A variável variavel é do tipo inteiro, ou seja, pode armazenar números inteiros

    printf("Digite um número: ");
    scanf("%d", &variavel);

    switch(variavel) // O switch é uma estrutura de controle que permite escolher entre várias opções
    {
        case 1: // Se a variável for igual a 1
            printf("Você escolheu a opção 1\n");
            break;
        case 2: // Se a variável for igual a 2
            printf("Você escolheu a opção 2\n");
            break;
        case 3: // Se a variável for igual a 3
            printf("Você escolheu a opção 3\n");
            break;
        default: // Se nenhum dos casos acima for verdadeiro
            printf("Opção inválida\n");
    }

    // Estrutura do switch:

    switch (expression) // A expressão pode ser um valor inteiro, caractere ou uma expressão que resulte em um desses tipos
    {
    case constant expression: // Se a expressão for igual a constante, executa o bloco de código correspondente
        /* code */
        break; // O break é usado para sair do switch, se não usar o break, ele continua executando os próximos casos
    
    default: // O default é opcional e é executado se nenhum dos casos acima for verdadeiro
        break;
    }
}
