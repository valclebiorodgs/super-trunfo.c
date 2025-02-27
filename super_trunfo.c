#include <stdio.h>
#include <locale.h>

int main(){

    char codigo_carta[10], codigo_carta02[10];
    char nome_cidade[50], nome_cidade02[50];
    char estado, estado02;  // Espera-se que o usuário digite apenas UMA letra
    int populacao, populacao02;
    float area, area02;
    float pib, pib02;
    int qtde_pontos_turisticos, qtde_pontos_turisticos02;

    printf(" - Preencha os dados da Carta 01:  \n ");
    printf("Codigo da carta (Ex: A01, B02...): ");
    scanf("%s", codigo_carta);  // Lê a string para o código da carta

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado);   // Lê apenas UM caractere; se o usuário digitar mais, os demais ficarão no buffer!

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);  // Lê apenas uma palavra para o nome da cidade

    printf("Populacao: ");
    scanf("%d", &populacao);
    
    printf("PIB: ");
    scanf("%f", &pib);

    printf("Area (km2): ");
    scanf("%f", &area);


    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &qtde_pontos_turisticos);



    
    printf(" - Preencha os dados da Carta 02:  \n ");
    printf("Codigo da carta 02 (Ex: A01, B02...): ");
    scanf("%s", codigo_carta02);

    printf("Estado  (letra de A a H): ");
    scanf(" %c", &estado02);   // Lê apenas UM caractere; se o usuário digitar mais, os demais ficarão no buffer!

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

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CARTA 01:\n");
    printf("Codigo: %s\n", codigo_carta);
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", qtde_pontos_turisticos);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CARTA 02:\n");
    printf("Codigo: %s\n", codigo_carta02);
    printf("Estado: %c\n", estado02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", qtde_pontos_turisticos);


    return 0;
}
