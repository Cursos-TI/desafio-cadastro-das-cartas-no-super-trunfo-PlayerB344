#include <stdio.h>
#include <string.h> // Para a função strcspn

int main() {
    printf("# SUPER TRUNFO - PAISES #\n\n");
    
    // CARTA 1
    printf("Carta 1\n\n");
    printf("Informe os dados da sua primeira carta:\n\n");

    // Entrada de DADOS
    char estado1[2];      // Letra do Estado de "A" a "H"
    char codigo1[3];      // Código do Estado, Ex:A01
    char cidade1[30];     // Nome da Cidade (aumentado para 30 para mais flexibilidade)
    int população1;       // População da cidade
    float area1;          // Área em km²
    float pib1;           // PIB do estado
    int turismo1;         // Número de pontos turísticos

    printf("\nDigite uma letra para seu Estado de 'A' a 'H':\n");
    scanf("%1s", estado1);  // Limita a leitura a 1 caractere para o estado

    printf("\nCódigo da carta (Ex:A01, B02, C03,...):\n");
    scanf("%2s", codigo1);  // Limita a leitura ao código da carta

    getchar();  // Limpa o buffer de entrada após ler o código (evita problemas com fgets)

    printf("\nDigite o nome da sua cidade (obs: SEM ESPAÇAMENTO):\n");
    scanf("%s", &cidade1);

    printf("\nQual a população da sua cidade?\n");
    scanf("%d", &população1);

    printf("\nQual a Área da sua cidade em Km²?\n");
    scanf("%f", &area1);

    printf("\nDigite o valor do PIB:\n");
    scanf("%f", &pib1);

    printf("\nDigite quantos Pontos Turísticos tem na sua cidade:\n");
    scanf("%d", &turismo1);

    // CARTA 2
    printf("\n\nCarta 2\n\n");
    printf("Informe os dados da sua segunda carta:\n\n");

    // Entrada de DADOS
    char estado2[2];      // Letra do Estado de "A" a "H"
    char codigo2[3];      // Código do Estado, Ex:A01
    char cidade2[30];     // Nome da Cidade (aumentado para 30 para mais flexibilidade)
    int população2;       // População da cidade
    float area2;          // Área em km²
    float pib2;           // PIB do estado
    int turismo2;         // Número de pontos turísticos

    printf("\nDigite uma letra para seu Estado de 'A' a 'H':\n");
    scanf("%1s", estado2);  // Limita a leitura a 1 caractere para o estado

    printf("\nCódigo da carta (Ex:A01, B02, C03,...):\n");
    scanf("%2s", codigo2);  // Limita a leitura ao código da carta

    getchar();  // Limpa o buffer de entrada após ler o código (evita problemas com fgets)

    printf("\nDigite o nome da sua cidade (obs: SEM ESPAÇAMENTO):\n");
    scanf("%s", cidade2);

    printf("\nQual a população da sua cidade?\n");
    scanf("%d", &população2);

    printf("\nQual a Área da sua cidade em Km²?\n");
    scanf("%f", &area2);

    printf("\nDigite o valor do PIB:\n");
    scanf("%f", &pib2);

    printf("\nDigite quantos Pontos Turísticos tem na sua cidade:\n");
    scanf("%d", &turismo2);

    // SAÍDA DE DADOS
    printf("\n    CARTA 1:\n\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n\n", estado1, codigo1, cidade1, população1, area1, pib1, turismo1);

    printf("\n    CARTA 2:\n\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n\n", estado2, codigo2, cidade2, população2, area2, pib2, turismo2);

    return 0;
}
