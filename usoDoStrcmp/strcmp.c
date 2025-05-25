#include <stdio.h>
#include <string.h>

int main(){

    char diferenca[10];

    printf("Digite ABC (Com letras maisculas): ");
    scanf("%s", abc);

    int diferenca = strcmp(abc, "ABC");

    if(strcmp(abc, "ABC") == 0){
        printf("\nOk, a diferença entre ABC e o que você DIGITOU é... zero!\n");
        printf("strcmp() retornou %d - (Zero diferenças)\n\n", diferenca);
    }
    else{
        printf("\nOpa, temos um erro aqui! O que foi socilitado e o que foi digitado são diferentes\n");
        printf("strcmp() retornou %d (Positivo se for maior, negativa se for menor)\n\n", diferenca);

        // A função strcmp() retorna um valor positivo se a primeira string for maior que a segunda, negativo se for menor e zero se forem iguais.
        // A função strcmp() é sensível a maiúsculas e minúsculas, ou seja, "abc" e "ABC" são considerados diferentes.
        // A função strcmp() compara os caracteres da string um a um, até encontrar uma diferença ou chegar ao final de uma das strings.
        // A função strcmp() é útil para comparar strings em C, especialmente quando precisamos verificar se duas strings são iguais ou diferentes.
        // A função strcmp() é definida na biblioteca string.h, então precisamos incluir essa biblioteca no início do nosso código.
    }
}