#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Cartas
    char estadoC01, estadoC02;
    char CodC01[4], CodC02[4];
    char cidade01[50], cidade02[50];
    unsigned long int populacao01, populacao02; 
    int PonTurist01, PonTurist02;
    float area01, area02, pib01, pib02, DensiPop01, DensiPop02, PibCap01, PibCap02;

    int c;

    // Cadastro das cartas

    //Carta 01
    printf("Vamos cadastrar as cartas para nosso jogo.\n");

    printf("\n");

    printf("Carta 01.\n");

    printf("Insira uma letra de A a H para representar um dos 8 estados: ");
    scanf(" %c", &estadoC01);

    printf("Agora vamos cadastrar um código para a carta 01. Insira a letra que você escolheu mais um número. Ex: A01: ");
    scanf("%3s", CodC01); 

    // Limpa o buffer antes do fgets
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Insira o nome da Cidade: ");
    fgets(cidade01, sizeof(cidade01), stdin);

    // Remove o \n do final
    cidade01[strcspn(cidade01, "\n")] = '\0'; 

    printf("Insira o número de Habitantes da cidade: ");
    scanf("%lu", &populacao01);

    printf("Insira a Área da cidade: ");
    scanf("%f", &area01); 

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PonTurist01);

    printf("\n");

    //Carta 02
    printf("Carta 02.\n");

    printf("Insira uma letra de A a H para representar um dos 8 estados: ");
    scanf(" %c", &estadoC02);

    printf("Agora vamos cadastrar um código para a carta 01. Insira a letra que você escolheu mais um número. Ex: A01: ");
    scanf("%3s", CodC02); 

    // Limpa o buffer antes do fgets
    while ((c = getchar()) != '\n' && c != EOF); 

    printf("Insira o nome da Cidade: ");
    fgets(cidade02, sizeof(cidade02), stdin);

    // Remove o \n do final
    cidade02[strcspn(cidade02, "\n")] = '\0'; 

    printf("Insira o número de Habitantes da cidade: ");
    scanf("%lu", &populacao02);

    printf("Insira a Área da cidade: ");
    scanf("%f", &area02); 

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &PonTurist02);

    DensiPop01 = (float) populacao01 / area01;
    DensiPop02 = (float) populacao02 / area02;

    PibCap01 = pib01 / (float) populacao01;
    PibCap02 = pib02 / (float) populacao02;

    // Cálculo do inverso da densidade populacional
    float inversoDens01 = 1.0 / DensiPop01;
    float inversoDens02 = 1.0 / DensiPop02;

    // Cálculo do Super Poder
    float superPoder01 = (float)populacao01 + area01 + pib01 + (float)PonTurist01 + PibCap01 + inversoDens01;
    float superPoder02 = (float)populacao02 + area02 + pib02 + (float)PonTurist02 + PibCap02 + inversoDens02;

    // Leitura das cartas
    printf("\n--- CARTA 01 ---\n");
    printf("Estado: %c\n", estadoC01);
    printf("Código: %s\n", CodC01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %lu\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01 / 1000000000.00);
    printf("Número de Pontos Turísticos: %d\n", PonTurist01);
    printf("Desnsidade Populacional: %.2f hab/km²\n", DensiPop01);
    printf("PIB per Capita: %.2f reais\n", PibCap01);
    printf("Super Poder: %.2f\n", superPoder01);

    printf("\n");

    printf("\n--- CARTA 02 ---\n");
    printf("Estado: %c\n", estadoC02);
    printf("Código: %s\n", CodC02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %lu\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02 / 1000000000.00);
    printf("Número de Pontos Turísticos: %d\n", PonTurist02);
    printf("Desnsidade Populacional: %.2f hab/km²\n", DensiPop02);
    printf("PIB per Capita: %.2f reais\n", PibCap02);
    printf("Super Poder: %.2f\n", superPoder02);

    printf("\n");

    // Comparações
    printf("Comparação de Cartas:\n");
    printf("(1 para verdadeiro: Carta 1 vence – 0 para falso: Carta 2 vence)\n");

    printf("\n");

    printf("População: (%d)\n", populacao01 > populacao02);
    printf("Área: (%d)\n", area01 > area02);
    printf("PIB: (%d)\n", pib01 > pib02);
    printf("Pontos Turísticos: (%d)\n", PonTurist01 > PonTurist02);
    printf("Densidade Populacional: (%d)\n", DensiPop01 < DensiPop02); 
    printf("PIB per Capita: (%d)\n", PibCap01 > PibCap02);
    printf("Super Poder: (%d)\n", superPoder01 > superPoder02);

    printf("\n");

    return 0;
    
}
