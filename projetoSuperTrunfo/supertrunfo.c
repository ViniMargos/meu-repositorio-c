#include <stdio.h>
#include <string.h>

int main(){

    // Declaração das variaveis
    char estado = 'A';
    char estado2 = 'B';
    char codigoDaCarta[4] = "1"; // Inicializa o segundo caractere do código da carta como 0 (Ex: A01, A02, A03, A04)
    char codigoDaCarta2[4] = "2";

    // Inicializando as variaveis PARA TESTE:
    char nomeDaCidade[30] = "SÃO PAULO";
    char nomeDaCidade2[30] = "RIO DE JANEIRO";

    int populacao = 10;
    int populacao2 = 10;
    int NumeroDePontosTuristicos = 10;
    int NumeroDePontosTuristicos2 = 5;
    float AreaPorKm2 = 1500.5;
    float AreaPorKm22 = 2000.75;
    float PIB = 5000000000.0;
    float PIB2 = 3000000000.0;

    int opcao;

    printf("Menu Principal:\n");
    printf("    1. Iniciar Jogo\n");
    printf("    2. Instruções\n");
    printf("    3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar(); 

    switch (opcao)
    {
    case 1:
/*
        printf("\n----------------------------------\n");
        printf("    DIGITE OS DADOS DA CARTA 1:");
        printf("\n----------------------------------\n");
 
        printf("    Digite o estado (A até H): ");
        scanf(" %c", &estado);

        codigoDaCarta[0] = estado; // O primeiro caractere do código da carta é o estado
        codigoDaCarta[1] = '0';
        printf("    Digite o código da carta (1 a 4): ");
        scanf(" %c", &codigoDaCarta[2]); // O terceiro caractere do código da carta é o número da carta (1 a 4)
        getchar();

        printf("    Digite o nome da cidade: ");
        fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê o nome das cidades com espaço (Ex: São Paulo)
        nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';// não quero que fgets tenho \n

        printf("    Digite a população: ");
        scanf("%d", &populacao);
        getchar();

        printf("    Digite o número de pontos turísticos: ");
        scanf("%d", &NumeroDePontosTuristicos);

        printf("    Digite a área em km²: ");
        scanf("%f", &AreaPorKm2);

        printf("    Digite o PIB: ");
        scanf("%f", &PIB);
        getchar();

        // Carta 2
        printf("\n----------------------------------\n");
        printf("    DIGITE OS DADOS DA CARTA2:");
        printf("\n----------------------------------\n");

        printf("    Digite o estado: ");
        scanf(" %c", &estado2);

        codigoDaCarta2[0] = estado2;
        codigoDaCarta2[1] = '0';
        printf("    Digite o código da carta (1 a 4): ");
        scanf(" %c", &codigoDaCarta2[2]); 
        getchar(); 

        printf("    Digite o nome da cidade: ");
        fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin); 
        nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; // Ex: Nome da cidade2[6] = \0 

        printf("    Digite a população: ");
        scanf("%d", &populacao2);

        printf("    Digite o número de pontos turísticos: ");
        scanf("%d", &NumeroDePontosTuristicos2);

        printf("    Digite a área em km²: ");
        scanf("%f", &AreaPorKm22);

        printf("    Digite o PIB: ");
        scanf("%f", &PIB2);  
    */
        break;
    case 2:
        printf("    Instruções do jogo:\n");
        printf("    - O jogo consiste em comparar cartas com base em atributos.\n");
        printf("    - Cada jogador escolhe uma carta e o jogador com o maior valor vence.\n");
        printf("    - O jogo continua até todas as cartas sejam jogadas.\n");
        break;
    case 3:
        printf("    Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    int opcaoDoAtributoDaCarta;
    switch (opcao){
        case 1:
            printf("\n----------------------------------\n");
            printf("    ESCOLHA O ATRIBUTO DA CARTA:");
            printf("\n----------------------------------\n");

            printf("    1. População\n");
            printf("    2. Número de pontos turísticos\n");
            printf("    3. PIB\n");
            printf("    4. PIB per capita\n");
            printf("    5. Densidade demográfica\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcaoDoAtributoDaCarta);
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }

    // PROCESSAMENTO DOS DADOS

        // Cálculo do PIB per capita e densidade demográfica
    double pibPerCapita = PIB / populacao;
    double pibPerCapita2 = PIB2 / populacao2; 

    float densidadeDemografica = populacao / AreaPorKm2;
    float densidadeDemografica2 = populacao2 / AreaPorKm22; 

        // Inverso da densidade demográfica: quanto maior a densidade demográfica, menor o superpoder
    float inversoDensidadeDemografica = densidadeDemografica / 1;
    float inversoDensidadeDemografica2 = densidadeDemografica2 / 1;

        // comparacões das cartas (Se valor for 1, carta 1 VENCE, senão Carta 2 VENCE)
    int comparacaoPopulacao = populacao > populacao2; 
    int comparacaoAreaPorKm2  = AreaPorKm2 > AreaPorKm22;
    int comparacaoPIB = PIB > PIB2;
    int comparacaoNumeroDePontosTuristicos  = NumeroDePontosTuristicos > NumeroDePontosTuristicos2;
    int comparacaoPibPerCapita = pibPerCapita > pibPerCapita2;
    int comparacaoDensidadeDemografica = densidadeDemografica < densidadeDemografica2;

    float superPoderCarta1 = (float) populacao + AreaPorKm2 + PIB + (float) NumeroDePontosTuristicos + pibPerCapita + inversoDensidadeDemografica;
    float superPoderCarta2 = (float) populacao2 + AreaPorKm22 + PIB2 + (float) NumeroDePontosTuristicos2 + pibPerCapita2 + inversoDensidadeDemografica2;
        // Comparação dos superpoderes das cartas (Qual carta é mais forte)
    int comparacaoSuperPoderCarta1 = superPoderCarta1 > superPoderCarta2; 

    // Fluxo de dados

    if(opcaoDoAtributoDaCarta == 1){
        printf("\n----------------------------------\n");
        printf("        RESULTADO DA RODADA");
        printf("\n----------------------------------\n");

        printf("Atributo Comparado: População\n\n");
        printf("# Carta 1: %s\n", nomeDaCidade);
        printf(" - População: %d\n\n", populacao);

        printf("# Carta 2: %s\n", nomeDaCidade2);
        printf(" - População: %d\n\n", populacao2);

        if(comparacaoPopulacao){
            printf("VENCEDOR: %s (Com a Maior População)", nomeDaCidade);
        }
        else if(populacao == populacao2){ //
            printf("EMPATE: Ambas as cidades possuem a mesma população.");
        }
        else
        {
            printf("VENCEDOR: %s (Com a Maior População)", nomeDaCidade2);
        }
        printf("\n----------------------------------\n");
    }
    else if(opcaoDoAtributoDaCarta == 2){
        // Menu de comparação do número de pontos turísticos
        printf("\n----------------------------------\n");
        printf("        RESULTADO DA RODADA");
        printf("\n----------------------------------\n");

        printf("Atributo Comparado: Número de Pontos Turísticos\n\n");
        printf("# Carta 1: %s\n", nomeDaCidade);
        printf(" - Número de Pontos Turísticos: %d\n\n", NumeroDePontosTuristicos);

        printf("# Carta 2: %s\n", nomeDaCidade2);
        printf(" - Número de Pontos Turísticos: %d\n\n", NumeroDePontosTuristicos2);

        // Comparação do número de pontos turísticos
        if(comparacaoNumeroDePontosTuristicos){
            printf("VENCEDOR: %s (Com o Maior Número de Pontos Turísticos)", nomeDaCidade);
        }
        else if(NumeroDePontosTuristicos == NumeroDePontosTuristicos2){ //
            printf("EMPATE: Ambas as cidades possuem o mesmo número de pontos turísticos.");
        }
        else
        {
            printf("VENCEDOR: %s (Com o Maior Número de Pontos Turísticos)", nomeDaCidade2);
        }
        printf("\n----------------------------------\n");
    }
    else if(opcaoDoAtributoDaCarta == 3){
        printf("\n----------------------------------\n");
        printf("        RESULTADO DA RODADA");
        printf("\n----------------------------------\n");

        printf("Atributo Comparado: PIB\n\n");
        printf("# Carta 1: %s\n", nomeDaCidade);
        printf(" - PIB: %.2f\n\n", PIB);

        printf("# Carta 2: %s\n", nomeDaCidade2);
        printf(" - PIB: %.2f\n\n", PIB2);

        if(comparacaoPIB){
            printf("VENCEDOR: %s (Com o Maior PIB)", nomeDaCidade);
        }
        else if(PIB == PIB2){ //
            printf("EMPATE: Ambas as cidades possuem o mesmo PIB.");
        }
        else
        {
            printf("VENCEDOR: %s (Com o Maior PIB)", nomeDaCidade2);
        }
    }
    else if(opcaoDoAtributoDaCarta == 4){
        printf("\n----------------------------------\n");
        printf("        RESULTADO DA RODADA");
        printf("\n----------------------------------\n");

        printf("Atributo Comparado: PIB per capita\n\n");
        printf("# Carta 1: %s\n", nomeDaCidade);
        printf(" - PIB per capita: %.2f\n\n", pibPerCapita);

        printf("# Carta 2: %s\n", nomeDaCidade2);
        printf(" - PIB per capita: %.2f\n\n", pibPerCapita2);

        if(comparacaoPibPerCapita){
            printf("VENCEDOR: %s (Com o Maior PIB per capita)", nomeDaCidade);
        }
        else if(pibPerCapita == pibPerCapita2){ //
            printf("EMPATE: Ambas as cidades possuem o mesmo PIB per capita.");
        }
        else
        {
            printf("VENCEDOR: %s (Com o Maior PIB per capita)", nomeDaCidade2);
        }
    }
    else if(opcaoDoAtributoDaCarta == 5){
        printf("\n----------------------------------\n");
        printf("        RESULTADO DA RODADA");
        printf("\n----------------------------------\n");

        printf("Atributo Comparado: Densidade Demográfica\n\n");
        printf("# Carta 1: %s\n", nomeDaCidade);
        printf(" - Densidade Demográfica: %.2f\n\n", densidadeDemografica);

        printf("# Carta 2: %s\n", nomeDaCidade2);
        printf(" - Densidade Demográfica: %.2f\n\n", densidadeDemografica2);

        if(comparacaoDensidadeDemografica){
            printf("VENCEDOR: %s (Com a Menor Densidade Demográfica)", nomeDaCidade);
        }
        else if(densidadeDemografica == densidadeDemografica2){ //
            printf("EMPATE: Ambas as cidades possuem a mesma densidade demográfica.");
        }
        else
        {
            printf("VENCEDOR: %s (Com a Menor Densidade Demográfica)", nomeDaCidade2);
        }
    }

    return 0;
}