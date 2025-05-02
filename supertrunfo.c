#include <stdio.h>
#include <string.h>

int main() {
    char estado1;
    char codigocarta1[5];
    char nomecidade1[15];
    int população1;
    float areakm2_1;
    float PIB_1;
    int numpontosturisticos1;

    char estado2;
    char codigocarta2[5];
    char nomecidade2[15];
    int população2;
    float areakm2_2;
    float PIB_2;
    int numpontosturisticos2;

    printf("Digite o estado: \n"); scanf(" %c", &estado1);
    printf("Digite o código da carta: \n"); scanf("%s", codigocarta1); getchar();
    printf("Digite o nome da cidade: \n"); fgets(nomecidade1, sizeof(nomecidade1), stdin); nomecidade1[strcspn(nomecidade1, "\n")] = 0;
    printf("Digite a população: \n"); scanf("%d", &população1);
    printf("Digite a área em km²: \n"); scanf("%f", &areakm2_1);
    printf("Digite o PIB: \n"); scanf("%f", &PIB_1);
    printf("Digite o número de pontos turísticos: \n"); scanf("%d", &numpontosturisticos1);
    
    printf("Digite o estado: \n"); scanf(" %c", &estado2);
    printf("Digite o código da carta: \n"); scanf("%s", codigocarta2); getchar();
    printf("Digite o nome da cidade: \n"); fgets(nomecidade2, sizeof(nomecidade2), stdin); nomecidade2[strcspn(nomecidade2, "\n")] = 0;
    printf("Digite a população: \n"); scanf("%d", &população2);
    printf("Digite a área em km²: \n"); scanf("%f", &areakm2_2);
    printf("Digite o PIB: \n"); scanf("%f", &PIB_2);
    printf("Digite o número de pontos turísticos: \n"); scanf("%d", &numpontosturisticos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", população1);
    printf("Área em km²: %.2f\n", areakm2_1);
    printf("PIB: %.2f\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", numpontosturisticos1);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", população2);
    printf("Área em km²: %.2f\n", areakm2_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Número de pontos turísticos: %d\n", numpontosturisticos2);

    return 0;
}