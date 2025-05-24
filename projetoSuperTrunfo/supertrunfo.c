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

    float densidadeDemografica, densidadeDemografica2;
    float pibPerCapita, pibPerCapita2;

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

    //Processamento dos dados
    pibPerCapita = PIB / populacao; // pib dividido pela população
    densidadeDemografica = populacao / AreaPorKm2;  // Quantidade de pessoas por km² em uma ArePorkm2
                                                   // Por exemplo, se a população for 10 e a área for 2, 
                                                  // a densidade demográfica é 5 habitantes/km² 10p/2km²

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

    //Processamento dos dados carta 2
    pibPerCapita2 = PIB2 / populacao2; 
    densidadeDemografica2 = populacao2 / AreaPorKm22; 

    printf("\n# EXIBIÇÃO DOS DADOS DA CARTA 1\n\n");

    // Exibição dos dados carta 1
    printf("    Estado: %c\n", estado);
    printf("    Código da carta: %s\n", codigoDaCarta);
    printf("    Nome da cidade: %s", nomeDaCidade); // Não precisa de \n, pois já tem no fgets
    printf("    População: %d\n", populacao);
    printf("    Número de pontos turísticos: %d\n", NumeroDePontosTuristicos);
    printf("    Área em km²: %.2f\n", AreaPorKm2);
    printf("    PIB: %.2f\n", PIB);
    printf("    Densidade demográfica: %.2f habitantes/km²\n", densidadeDemografica);
    printf("    PIB per capita: %.2f\n", pibPerCapita);

    printf("\n# EXIBIÇÃO DOS DADOS DA CARTA 2\n\n");

    printf("    Estado: %c\n", estado2);
    printf("    Código da carta: %s\n", codigoDaCarta2);
    printf("    Nome da cidade: %s", nomeDaCidade2); // Não precisa de \n, pois já tem no fgets
    printf("    População: %d\n", populacao2);
    printf("    Número de pontos turísticos: %d\n", NumeroDePontosTuristicos2);
    printf("    Área em km²: %.2f\n", AreaPorKm22);
    printf("    PIB: %.2f\n", PIB2);
    printf("    Densidade demográfica: %.2f habitantes/km²\n", densidadeDemografica2);
    printf("    PIB per capita: %.2f\n", pibPerCapita2);
    return 0;
}