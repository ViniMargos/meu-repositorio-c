#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarar as variaveis
    char produtoa[30] = "Produto A";
    char produtob[30] = "Produto B";

        // o unsigned int é um inteiro sem sinal, ou seja, não pode ser negativo
    unsigned int estoqueb = 2000;
    unsigned int estoquea = 1000; 

        // o estoque mínimo é o mínimo de produtos que devem estar em estoque
    unsigned int estoqueMinimoa = 500; 
    unsigned int estoqueMinimob = 2500;

        // o estoque máximo é o máximo de produtos que podem estar em estoque
    float precoprodutoa = 10.50;
    float precoprodutob = 20.50;
    
        // o valor do estoque é o valor total do estoque, ou seja, o preço unitário multiplicado pela quantidade em estoque
    double valorEstoqueA;
    double valorEstoqueB;

        // Variaveis para armazenar o resultado da comparação
    int resultadoA, resultadoB;
    int comparacaoValorEstoqueA, comparacaoValorEstoqueB;;

    // Exibir os dados do produto A e B
    printf("Produto: %s tem %u e o valor unitario é R$%.2f\n", produtoa, estoquea, precoprodutoa);
    printf("Produto: %s tem %u e o valor unitario é R$%.2f\n", produtob, estoqueb, precoprodutob);
    printf("\n");

    // Comparar com o estoque mínimo
    resultadoA = estoquea < estoqueMinimoa;
    resultadoB = estoqueb < estoqueMinimob;

    // Exibir o resultado da comparação.
        /* EXPLICAÇÃO DO OPERADOR TENÁRIO: "?":
            Estrutura: condição ? se sim : se não (0 : 1)
            Se resultadoB for 1 imprime 1 (Esquerdo), se for 0 imprime "Não"(Direito)
            O operador ternário é uma forma de simplificar o if-else, onde se a condição for verdadeira, imprime "Sim" (if), caso contrário imprime "Não" (else)
        */
    printf("Produto: %s tem estoque abaixo do mínimo? %s\n", produtoa, resultadoA ? "Sim" : "Não");
    printf("Produto: %s tem estoque abaixo do mínimo? %s\n", produtob, resultadoB ? "Sim" : "Não"); 
    printf("\n");
    // Calcular o valor total do estoque
    valorEstoqueA = estoquea * precoprodutoa; // valor do estoque A é multiplicado pelo preço unitário do produto A (Ex: produtoa = 1000 * valorDoProdutoA = 10.50 = 10500)
    valorEstoqueB = estoqueb * precoprodutob; // (Ex: produtob = 2000 * valorDoProdutoB = 20.50 = 41000)
    
    // comparar o valor do estoque
    comparacaoValorEstoqueA = valorEstoqueA < valorEstoqueB; // 41000 < 10500 = 0 (Falso)
    comparacaoValorEstoqueB = valorEstoqueB < valorEstoqueA; // 10500 < 41000 = 1 (Verdadeiro)

    printf("O valor total do %s (R$%.2f) é menor que o produto B? %s\n", produtoa, valorEstoqueA, comparacaoValorEstoqueA ? "Sim" : "Não"); 
    printf("O valor total do %s (R$%.2f) é menor que o produto A? %s\n", produtob, valorEstoqueB, comparacaoValorEstoqueB ? "Sim" : "Não");
    printf("\n");

    return 0;
}