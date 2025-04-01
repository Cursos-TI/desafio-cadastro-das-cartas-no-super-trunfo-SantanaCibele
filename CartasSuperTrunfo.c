#include <stdio.h>
int main() {
    char estado;
    char codigoDacarta[10];
    char nomeDaCidade[50];
    int populacao;
    float pib, areaEmKm2;
    int pontosTuristicos;
       //dados que o usuario deve informar sobre a carta//
    printf("Digite um estado:\n");
    scanf("%s", &estado);
    printf("O codigo da carta é: %c \n",'1');
    printf("Digite o nome da cidade:\n");
    scanfe("%s", &nomeDaCidade);
    printf("Digite a população: \n");
    scanf("%f",&populacao);
    printf("Digite o PIB: \n");
    scanf("%f",&pib);
    printf(" Digite a area em km2:\n");
    scanf("%f", &areaEmKm2);
    printf("Digite o número de pontos turisticos:\n");
    scanf("%d",&pontosTuristicos);
// Cartas pre definidas pelo programador//

    printf("Estado: %s \n", "Pará");
    printf("Código da carta: %s \n", "02");
    printf("Nome da cidade: %s \n", "Belém");
    printf("População: %d \n", "1.500.000");
    printf("Pib: %.2f \n", "1.059,458");
    printf("Número de pontos turísticos: %d \n","20");

    
return 0;
}
