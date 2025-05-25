#include <stdio.h>

int main(){
    int escolhaJogador, escolhaComputador;

    printf("# Jogo de jokenpô:\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaJogador);
    getchar();

    // ex: 2000 % 3 = 666.666.... a parte decimal é descartada. 666... 666 * 3 = 1998 (Sobrando 2), 2 + 1998 = 2000
    escolhaComputador = rand() % 3 + 1; 

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra -\n");
        break;
    case 2:
        printf("Jogador: Papel -\n");
        break;
    case 3:
        printf("Jogador: Tesoura -\n");
        break;
    default: printf("Opção inválida!\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra - \n");
        break;
    case 2:
        printf("Computador: Papel - \n");
        break;
    case 3:
        printf("Computador: Tesoura - \n");
        break;
    default:
        break;
    }

    if(escolhaComputador == escolhaJogador){
        printf("# Empate!\n");
    }
    else if(escolhaJogador == 1 && escolhaComputador == 3 || // pedra ganha de tesoura
        escolhaJogador == 2 && escolhaComputador == 1 || // papel ganha de pedra
        escolhaJogador == 3 && escolhaComputador == 2){ // tesoura ganha de papel

        printf("***** Você venceu! *****\n");
        // A condição acima tem que ser true && true em alguma das opções.
    }
    else{
        printf("Você perdeu!\n");

    }
}
