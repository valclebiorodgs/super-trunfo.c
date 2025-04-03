#include <stdio.h>
#include <string.h>

int main() {
    char codigo_carta[10], codigo_carta02[10];
    char nome_cidade[50], nome_cidade02[50];
    char estado[20], estado02[20];
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
    int qtde_pontos_turisticos, qtde_pontos_turisticos02;

    // Codido de entrada de dados da Carta 01
    printf(" - Preencha os dados da Carta 01:  \n ");
    printf("Codigo da carta: ");
    scanf("%s", codigo_carta);
    printf("Estado: ");
    scanf("%s", estado);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Area (km2): ");
    scanf("%f", &area);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtde_pontos_turisticos);

    // Codigo para entradas dos dados da Carta 02
    printf(" - Preencha os dados da Carta 02:  \n ");
    printf("Codigo da carta: ");
    scanf("%s", codigo_carta02);
    printf("Estado: ");
    scanf("%s", estado02);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade02);
    printf("Populacao: ");
    scanf("%d", &populacao02);
    printf("PIB: ");
    scanf("%f", &pib02);
    printf("Area (km2): ");
    scanf("%f", &area02);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtde_pontos_turisticos02);

    float densidade_pop01 = populacao / area;
    float densidade_pop02 = populacao02 / area02;

    int opcao;
    float valor1, valor2;
    char atributo[50];

    // Exibe o menu para selecionar o atributo de comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (vence o menor)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            strcpy(atributo, "Populacao");
            valor1 = populacao;
            valor2 = populacao02;
            break;
        case 2:
            strcpy(atributo, "Area");
            valor1 = area;
            valor2 = area02;
            break;
        case 3:
            strcpy(atributo, "PIB");
            valor1 = pib;
            valor2 = pib02;
            break;
        case 4:
            strcpy(atributo, "Pontos Turisticos");
            valor1 = qtde_pontos_turisticos;
            valor2 = qtde_pontos_turisticos02;
            break;
        case 5:
            strcpy(atributo, "Densidade Populacional");
            valor1 = densidade_pop01;
            valor2 = densidade_pop02;
            break;
        default:
            printf("Opcao invalida! Encerrando...\n");
            return 1;
    }

    // Exibe o atributo que foi escolhido para comparação, e mostra a carta vencedora:
    printf("\n==================================================\n");
    printf(" Comparacao de cartas (Atributo: %s)\n", atributo);
    printf("====================================================\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade, estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade02, estado02, valor2);

    // Lógica do calculo de Densidade Populacional:
    if (opcao == 5) {
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
        } else if (valor1 > valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade02);
        } else {
            printf("Empate!\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
        } else if (valor1 < valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade02);
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}
