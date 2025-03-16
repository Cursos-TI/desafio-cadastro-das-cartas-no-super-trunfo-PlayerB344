#include <stdio.h>

int main() {
    printf("# SUPER TRUNFO - PAISES #\n\n");
    printf("Carta 1\n\n");
    printf("Informe os dados da sua primeira carta:\n");


//Entrada de DADOS

char estado;        //Estado da letra "A" a "H"
char codigo[3];     //Código do Estado, Ex:A01
char cidade[20];    //Nome da Cidade sem espaçamento
int população;      //População em numeros inteiros
float area;         // Área em km²
float pib;          //PIB do estado
int turismo;        //Numeros de pontos turísticos

printf("Digite uma letra para seu Estado de 'A' a 'H':\n");
scanf("%c", &estado);

printf("Código da carta:\n Ex:A01, A02\n");
scanf("%s", &codigo);

printf("Digite o nome da sua cidade (obs: SEM ESPAÇAMENTO:\n)");
scanf("%s", &cidade);












    return 0;
}