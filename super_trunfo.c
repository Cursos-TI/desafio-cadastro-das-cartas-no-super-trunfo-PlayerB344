#include <stdio.h>
#include <string.h> // Para a função strcspn

int main() {
    printf("# SUPER TRUNFO - PAISES #\n\n");
    
    // CARTA 1
    printf("Carta 1\n\n");
    printf("Informe os dados da sua primeira carta:\n\n");

    // Entrada de DADOS
    char estado1[2];      // Letra do Estado de "A" a "H"
    char codigo1[4];      // Código do Estado, Ex:A01, precisa de espaço para 3 caracteres + '\0'
    char cidade1[30];     // Nome da Cidade (aumentado para 30 para mais flexibilidade)
    int populacao1 = 0;   // Inicializado para evitar valor indeterminado
    double area1 = 0.0;   // Alterado para double
    double pib1 = 0.0;    // Alterado para double
    int turismo1 = 0;     // Inicializado para evitar valor indeterminado
    double densidade1 = 0.0;   // Alterado para double
    double pibpercapita1 = 0.0; // Alterado para double

    printf("\nDigite uma letra para seu Estado de 'A' a 'H':\n");
    scanf("%1s", estado1);  // Limita a leitura a 1 caractere para o estado

    printf("\nCódigo da carta (Ex:A01, B02, C03,...):\n");
    scanf("%3s", codigo1);  // Limita a leitura ao código de 3 caracteres (A01, B02, etc)

    getchar();  // Limpa o buffer de entrada após ler o código (evita problemas com fgets)

    printf("\nDigite o nome da sua cidade (obs: SEM ESPAÇAMENTO):\n");
    scanf("%s", cidade1);

    printf("\nQual a população da sua cidade?\n");
    scanf("%d", &populacao1);

    printf("\nQual a Área da sua cidade em Km²?\n");
    scanf("%lf", &area1); // Alterado para scanf de double

    // O PIB será informado em bilhões de reais, mas será multiplicado por 1 bilhão para converter em valor real
    printf("\nDigite o valor do PIB em bilhões de reais (use ponto como separador decimal):\n");
    scanf("%lf", &pib1);  // PIB em bilhões de reais
    pib1 = pib1 * 1000000000.0; // Convertendo PIB de bilhões para o valor real em reais

    printf("\nDigite quantos Pontos Turísticos tem na sua cidade:\n");
    scanf("%d", &turismo1);

    // Cálculo de Densidade e PIB per Capita após a entrada dos dados
        densidade1 = (double) populacao1 / area1;
        pibpercapita1 = pib1 / populacao1; // Já é double, não precisa de cast

    //Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + turismo1 + pibpercapita1;

    // CARTA 2
    printf("\n\nCarta 2\n\n");
    printf("Informe os dados da sua segunda carta:\n\n");

    // Entrada de DADOS
    char estado2[2];      // Letra do Estado de "A" a "H"
    char codigo2[4];      // Código do Estado, Ex:A01, precisa de espaço para 3 caracteres + '\0'
    char cidade2[30];     // Nome da Cidade (aumentado para 30 para mais flexibilidade)
    int populacao2 = 0;   // Inicializado para evitar valor indeterminado
    double area2 = 0.0;   // Alterado para double
    double pib2 = 0.0;    // Alterado para double
    int turismo2 = 0;     // Inicializado para evitar valor indeterminado
    double densidade2 = 0.0;   // Alterado para double
    double pibpercapita2 = 0.0; // Alterado para double

    printf("\nDigite uma letra para seu Estado de 'A' a 'H':\n");
    scanf("%1s", estado2);  // Limita a leitura a 1 caractere para o estado

    printf("\nCódigo da carta (Ex:A01, B02, C03,...):\n");
    scanf("%3s", codigo2);  // Limita a leitura ao código de 3 caracteres (A01, B02, etc)

    getchar();  // Limpa o buffer de entrada após ler o código (evita problemas com fgets)

    printf("\nDigite o nome da sua cidade (obs: SEM ESPAÇAMENTO):\n");
    scanf("%s", cidade2);

    printf("\nQual a população da sua cidade?\n");
    scanf("%d", &populacao2);

    printf("\nQual a Área da sua cidade em Km²?\n");
    scanf("%lf", &area2); // Alterado para scanf de double

    // O PIB será informado em bilhões de reais, mas será multiplicado por 1 bilhão para converter em valor real
    printf("\nDigite o valor do PIB em bilhões de reais (use ponto como separador decimal):\n");
    scanf("%lf", &pib2);  // PIB em bilhões de reais
    pib2 = pib2 * 1000000000.0; // Convertendo PIB de bilhões para o valor real em reais

    printf("\nDigite quantos Pontos Turísticos tem na sua cidade:\n");
    scanf("%d", &turismo2);

    // Cálculo de Densidade e PIB per Capita após a entrada dos dados
        densidade2 = (double) populacao2 / area2;
        pibpercapita2 = pib2 / populacao2; // Já é double, não precisa de cast

    //Super Poder
    float superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibpercapita2;

    // Resultado das Comparações
    unsigned int resultadoPopulacao = (float) populacao1 > populacao2;
    unsigned int resultadoArea = (float) area1 > area2;
    unsigned int resultadoPIB = (float) pib1 > pib2;
    unsigned int resultadoTurismo = (float) turismo1 > turismo2;
    unsigned int resultadoDensidadePopulacional = (float) densidade1 < densidade2;
    unsigned int resultadoPibPerCapita = (float) pibpercapita1 > pibpercapita2;
    unsigned long int resultadoSuperPoder = (double) superPoder1 > superPoder2;

    // SAÍDA DE DADOS
    printf("\n    CARTA 1:\n\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n Super Poder: %.2f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1 / 1000000000.0, turismo1, densidade1, pibpercapita1, superPoder1);

    printf("\n    CARTA 2:\n\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n Super Poder: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2 / 1000000000.0, turismo2, densidade2, pibpercapita2, superPoder2);

    printf("\n          ### BATALHA DE CARTAS ###\n\n");
    printf("Comparação de Cartas:\n");
    printf("(Obs: Se o numero for '1' a Carta 1 venceu, se o numero for '0' a Carta 2 venceu)\n");
    printf("População: %u\n", resultadoPopulacao);
    printf("Área: %u\n", resultadoArea);
    printf("PIB: %u\n", resultadoPIB);
    printf("Pontos Turísticos: %u\n", resultadoTurismo);
    printf("Densidade Populacional: %u\n", resultadoDensidadePopulacional);
    printf("PIB per Capita: %u\n", resultadoPibPerCapita);
    printf("Super Poder: %lu\n", resultadoSuperPoder);

    return 0;
}
