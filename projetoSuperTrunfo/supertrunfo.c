#include <stdio.h>
#include <string.h>

int main(){

    // Declaração das variaveis
    char estado, estado2;
    char codigoDaCarta[4], codigoDaCarta2[4]; 
    char nomeDaCidade[24], nomeDaCidade2[24]; 

    int populacao, populacao2;
    int NumeroDePontosTuristicos, NumeroDePontosTuristicos2;

    float AreaPorKm2, AreaPorKm22;
    float PIB, PIB2;

    // Inicializando variaveis (Redundancia, mas para fins de exemplo)
    estado = 'A';
    codigoDaCarta[1] = '0'; // Inicializa o segundo caractere do código da carta como 0 (Ex: A01, A02, A03, A04)
    codigoDaCarta2[1] = '0';
    strcpy(nomeDaCidade, "São Paulo"); // Inicializa um Array com uma string
    populacao = 12325000;
    NumeroDePontosTuristicos = 50;
    AreaPorKm2 = 1521.11;
    PIB = 699.28;


    // Entrada de dados Carta 1
    printf("# DIGITE OS DADOS DA PRIMEIRA CARTA:\n\n");

    printf("Digite o estado (A até H): ");
    scanf(" %c", &estado);

    codigoDaCarta[0] = estado; // O primeiro caractere do código da carta é o estado
    printf("Digite o código da carta (1 a 4): ");
    scanf(" %c", &codigoDaCarta[2]); // O terceiro caractere do código da carta é o número da carta (1 a 4)
    getchar(); // Limpa o buffer do teclado

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê o nome das cidades com espaço (Ex: São Paulo)
                                                      // O fgets lê até o \n, então não precisa de \n no final
                                                      
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("Digite a área em km²: ");
    scanf("%f", &AreaPorKm2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    // Entrada de dados Carta 2
    printf("\n# DIGITE OS DADOS DA SEGUNDA CARTA:\n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    codigoDaCarta2[0] = estado2;
    printf("Digite o código da carta (1 a 4): ");
    scanf(" %c", &codigoDaCarta2[2]); 
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("Digite a área em km²: ");
    scanf("%f", &AreaPorKm22);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    // Processamento dos dados

        // Cálculo do PIB per capita e densidade demográfica
        // PIB dividido pela população e quantidade de pessoas por km² em uma Area
    double pibPerCapita = PIB / populacao; 
    double pibPerCapita2 = PIB2 / populacao2; 

    float densidadeDemografica = populacao / AreaPorKm2;
    float densidadeDemografica2 = populacao2 / AreaPorKm22; 

        // inverso da densidade demográfica
        // Quanto maior a densidade demográfica, menor o superpoder
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

    printf("\n# EXIBIÇÃO DOS DADOS DA CARTA 1\n\n");

    printf("Carta 1 - %s: %d \n", nomeDaCidade, populacao);
    printf("Carta 2 - %s: %d", nomeDaCidade2, populacao2);
    printf("Resultado: ", comparacaoPopulacao ? "Carta 1 venceu!" : "Carta 2 venceu!");

    return 0;
}