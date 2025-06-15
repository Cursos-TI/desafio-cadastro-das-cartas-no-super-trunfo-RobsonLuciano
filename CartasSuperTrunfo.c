#include <stdio.h>
#include <string.h>

int main() {
    // Cartas
    char estadoC01, estadoC02;
    char CodC01[4], CodC02[4];
    char cidade01[50], cidade02[50];
    unsigned long int populacao01, populacao02; 
    int PonTurist01, PonTurist02;
    float area01, area02, pib01, pib02, DensiPop01, DensiPop02, PibCap01, PibCap02;
    int atributo01, atributo02, vitoria01 = 0, vitoria02 = 0;
    float atrisoma01_1, atrisoma02_1, atrisoma01_2, atrisoma02_2, somacarta01, somacarta02;

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

    printf("Agora vamos cadastrar um código para a carta 02. Insira a letra que você escolheu mais um número. Ex: B02: ");
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
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop01);
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
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop02);
    printf("PIB per Capita: %.2f reais\n", PibCap02);
    printf("Super Poder: %.2f\n", superPoder02);

    printf("\n");

    // Comparações
    printf("Comparação de Cartas:\n");
    printf("(1 para verdadeiro: Carta 1 vence – e 0 para falso: Carta 2 vence)\n");

    printf("\n");

    printf("População: (%lu)\n", populacao01 > populacao02);
    printf("Área: (%d)\n", area01 > area02);
    printf("PIB: (%d)\n", pib01 > pib02);
    printf("Pontos Turísticos: (%d)\n", PonTurist01 > PonTurist02);
    printf("Densidade Populacional: (%d)\n", DensiPop01 < DensiPop02); 
    printf("PIB per Capita: (%d)\n", PibCap01 > PibCap02);
    printf("Super Poder: (%d)\n", superPoder01 > superPoder02);

    printf("\n");

    //Menu interativo
    //Comparação usando if-else

    printf("Agora que as cartas estão cadastradas está na hora de duelar.\n");
    printf("Escolha um dos Atributos:\n");
    printf("01_População.\n");
    printf("02_Área.\n");
    printf("03_PIB.\n");
    printf("04_Pontos Turísticos.\n");
    printf("05_Densidade Populacional.\n"); 
    printf("06_PIB per Capita.\n");
    printf("07_Super Poder.\n");
    printf("Atributo: ");
    scanf("%d", &atributo01);

    printf("\n");

    printf("Agora escolha outro Atributo:\n");
    switch (atributo01)
    {
    case 1:
        printf("02_Área.\n");
        printf("03_PIB.\n");
        printf("04_Pontos Turísticos.\n");
        printf("05_Densidade Populacional.\n"); 
        printf("06_PIB per Capita.\n");
        printf("07_Super Poder.\n");
        break;

    case 2:
        printf("01_População.\n");
        printf("03_PIB.\n");
        printf("04_Pontos Turísticos.\n");
        printf("05_Densidade Populacional.\n"); 
        printf("06_PIB per Capita.\n");
        printf("07_Super Poder.\n");
        break;
    
    case 3:
        printf("01_População.\n");
        printf("02_Área.\n");
        printf("04_Pontos Turísticos.\n");
        printf("05_Densidade Populacional.\n"); 
        printf("06_PIB per Capita.\n");
        printf("07_Super Poder.\n");
        break;

    case 4:
        printf("01_População.\n");
        printf("02_Área.\n");
        printf("03_PIB.\n");
        printf("05_Densidade Populacional.\n"); 
        printf("06_PIB per Capita.\n");
        printf("07_Super Poder.\n");
        break;

    case 5:
        printf("01_População.\n");
        printf("02_Área.\n");
        printf("03_PIB.\n");
        printf("04_Pontos Turísticos.\n");   
        printf("06_PIB per Capita.\n");
        printf("07_Super Poder.\n");
        break;
    
    case 6:
        printf("01_População.\n");
        printf("02_Área.\n");
        printf("03_PIB.\n");
        printf("04_Pontos Turísticos.\n");
        printf("05_Densidade Populacional.\n");         
        printf("07_Super Poder.\n");
        break;

    case 7:
        printf("01_População.\n");
        printf("02_Área.\n");
        printf("03_PIB.\n");
        printf("04_Pontos Turísticos.\n");
        printf("05_Densidade Populacional.\n"); 
        printf("06_PIB per Capita.\n");
        break;
    
    default:
        printf("Atributo inválido.");
        break;
    }

    printf("Atributo: ");
    scanf("%d", &atributo02);

    if (atributo01 == atributo02 || atributo02 < 1 || atributo02 > 7) {
        printf("Opção inválida. Tente novamente.\n");}

    printf("\n");
    
    switch (atributo01)
    {
    case 1:
    //Comparando População
    if (populacao01 > populacao02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = populacao01;
        atrisoma01_2 = populacao02;
        vitoria01++;
    } else if (populacao01 < populacao02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = populacao01;
        atrisoma01_2 = populacao02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("Houve um empate!\n");
        atrisoma01_1 = populacao01;
        atrisoma01_2 = populacao02;
    }
    break;
    
    case 2:
    //Comparando Área
    if (area01 > area02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = area01;
        atrisoma01_2 = area02;
        vitoria01++;
    } else if (area01 < area02){
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = area01;
        atrisoma01_2 = area02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("Houve um empate!\n");
        atrisoma01_1 = area01;
        atrisoma01_2 = area02;
    }
    break;

    case 3:
    //Comparando PIB
    if (pib01 > pib02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = pib01;
        atrisoma01_2 = pib02;
        vitoria01++;
    } else if (pib01 < pib02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = pib01;
        atrisoma01_2 = pib02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("Houve um empate!\n");
        atrisoma01_1 = pib01;
        atrisoma01_2 = pib02;
    }
    break;

    case 4:
    //Comparando Pontos Turísticos
    if (PonTurist01 > PonTurist02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = PonTurist01;
        atrisoma01_2 = PonTurist02;
        vitoria01++;
    } else if (PonTurist01 < PonTurist02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = PonTurist01;
        atrisoma01_2 = PonTurist02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", &cidade01, &cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("Houve um empate!\n");
        atrisoma01_1 = PonTurist01;
        atrisoma01_2 = PonTurist02;
    }
    break;

    case 5:
    //Comparando Densidade populacional
    if (DensiPop01 < DensiPop02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = DensiPop01;
        atrisoma01_2 = DensiPop02;
        vitoria01++;
    } else if (DensiPop01 > DensiPop02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = DensiPop01;
        atrisoma01_2 = DensiPop02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("Houve um empate!\n");
        atrisoma01_1 = DensiPop01;
        atrisoma01_2 = DensiPop02;
    }
    break;

    case 6:
    //Comparando PIB per Capita
    if (PibCap01 > PibCap02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = PibCap01;
        atrisoma01_2 = PibCap02;
        vitoria01++;
    } else if (PibCap01 < PibCap02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = PibCap01;
        atrisoma01_2 = PibCap02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("Houve um empate!\n");
        atrisoma01_1 = PibCap01;
        atrisoma01_2 = PibCap02;
    }
    break;

    case 7:
    //Comparando Super Poder
    if (superPoder01 > superPoder02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma01_1 = superPoder01;
        atrisoma01_2 = superPoder02;
        vitoria01++;
    } else if (superPoder01 < superPoder02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma01_1 = superPoder01;
        atrisoma01_2 = superPoder02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("Houve um empate!\n");
        atrisoma01_1 = superPoder01;
        atrisoma01_2 = superPoder02;
    }
    break;

    default:
        printf("Atributo inválido.");
        break;
    }

    printf("\n");

    switch (atributo02)
    {
    case 1:
    //Comparando População
    if (populacao01 > populacao02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = populacao01;
        atrisoma02_2 = populacao02;
        vitoria01++;
    } else if (populacao01 < populacao02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = populacao01;
        atrisoma02_2 = populacao02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("População Carta 01: %lu - População Carta 02: %lu\n", populacao01, populacao02);
        printf("Houve um empate!\n");
        atrisoma02_1 = populacao01;
        atrisoma02_2 = populacao02;
    }
    break;
    
    case 2:
    //Comparando Área
    if (area01 > area02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = area01;
        atrisoma02_2 = area02;
        vitoria01++;
    } else if (area01 < area02){
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = area01;
        atrisoma02_2 = area02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Área Carta 01: %.2f - Área Carta 02: %.2f\n", area01, area02);
        printf("Houve um empate!\n");
        atrisoma02_1 = area01;
        atrisoma02_2 = area02;
    }
    break;

    case 3:
    //Comparando PIB
    if (pib01 > pib02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = pib01;
        atrisoma02_2 = pib02;
        vitoria01++;
    } else if (pib01 < pib02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = pib01;
        atrisoma02_2 = pib02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
        printf("Houve um empate!\n");
        atrisoma02_1 = pib01;
        atrisoma02_2 = pib02;
    }
    break;

    case 4:
    //Comparando Pontos Turísticos
    if (PonTurist01 > PonTurist02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = PonTurist01;
        atrisoma02_2 = PonTurist02;
        vitoria01++;
    } else if (PonTurist01 < PonTurist02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = PonTurist01;
        atrisoma02_2 = PonTurist02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", &cidade01, &cidade02);
        printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", PonTurist01, PonTurist02);
        printf("Houve um empate!\n");
        atrisoma02_1 = PonTurist01;
        atrisoma02_2 = PonTurist02;
    }
    break;

    case 5:
    //Comparando Densidade populacional
    if (DensiPop01 < DensiPop02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = DensiPop01;
        atrisoma02_2 = DensiPop02;
        vitoria01++;
    } else if (DensiPop01 > DensiPop02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = DensiPop01;
        atrisoma02_2 = DensiPop02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Densidade Populacional Carta 01: %.2f - Densidade Populacional Carta 02: %.2f\n", DensiPop01, DensiPop02);
        printf("Houve um empate!\n");
        atrisoma02_1 = DensiPop01;
        atrisoma02_2 = DensiPop02;
    }
    break;

    case 6:
    //Comparando PIB per Capita
    if (PibCap01 > PibCap02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = PibCap01;
        atrisoma02_2 = PibCap02;
        vitoria01++;
    } else if (PibCap01 < PibCap02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = PibCap01;
        atrisoma02_2 = PibCap02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("PIB per Capta Carta 01: %.2f - PIB per Capta Carta 02: %.2f\n", PibCap01, PibCap02);
        printf("Houve um empate!\n");
        atrisoma02_1 = PibCap01;
        atrisoma02_2 = PibCap02;
    }
    break;

    case 7:
    //Comparando Super Poder
    if (superPoder01 > superPoder02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        atrisoma02_1 = superPoder01;
        atrisoma02_2 = superPoder02;
        vitoria01++;
    } else if (superPoder01 < superPoder02) {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        atrisoma02_1 = superPoder01;
        atrisoma02_2 = superPoder02;
        vitoria02++;
    } else {
        printf("### %s vs %s ###\n", cidade01, cidade02);
        printf("Super Poder Carta 01: %.2f - Super Poder Carta 02: %.2f\n", superPoder01, superPoder02);
        printf("Houve um empate!\n");
        atrisoma02_1 = superPoder01;
        atrisoma02_2 = superPoder02;
    }
    break;

    default:
        printf("Atributo inválido.");
        break;
    }

    printf("\n");

    somacarta01 = atrisoma01_1 + atrisoma02_1;
    somacarta02 = atrisoma01_2 + atrisoma02_2;
    if (somacarta01 > somacarta02) {
        printf("Soma dos atributos Carta 01: %.2f - Soma atributos Carta 02: %.2f\n", somacarta01, somacarta02);
        printf("A Carta 01 %s venceu!\n", cidade01);
        vitoria01++;
    } else if (somacarta01 < somacarta02) {
        printf("Soma dos atributos Carta 01: %.2f - Soma atributos Carta 02: %.2f\n", somacarta01, somacarta02);
        printf("A Carta 02 %s venceu!\n", cidade02);
        vitoria02++;
    } else {
       printf("Soma dos atributos Carta 01: %.2f - Soma atributos Carta 02: %.2f\n", somacarta01, somacarta02);
        printf("Houve um empate!\n");
    }
    printf("\n");
    if (vitoria01 > vitoria02) {
        printf("##### A Carta 01 %s venceu! #####\n", cidade01);
        vitoria01++;
    } else if (vitoria01 < vitoria02) {
        printf("##### A Carta 02 %s venceu! #####\n", cidade02);
        vitoria02++;
    } else {
        printf("##### Houve um empate! #####\n");
    }


    printf("\n");

    return 0;
}
