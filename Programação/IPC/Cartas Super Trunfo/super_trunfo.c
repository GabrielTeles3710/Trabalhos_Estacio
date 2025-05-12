#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main() {
    
    char state1, state2, code1[4], code2[4], cityName1[26], cityName2[26];
    unsigned long int population1, population2;
    float area1, area2, PIB1, PIB2, DP1, DP2, PIBperCapta1, PIBperCapta2, SP2, SP1;
    int turisticPoints1, turisticPoints2, escolha, selec1 = 0,selec2 = 0, print, sum1,sum2;
    
    printf("\n");
    printf("Adicione as informações da primeira carta \n");

    printf("Digite uma letra de A a H pra representar o primeiro estado: ");
    scanf("%c", &state1);
    
    code1[4] = state1;
    strcat(code1, "01");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName1);

    printf("Digite a população deste estado: ");
    scanf(" %lu", &population1);

    printf("Digite a área deste estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos deste estado: ");
    scanf("%d", &turisticPoints1);
    printf("\n");

    DP1 = population1 / area1;
    PIBperCapta1 = PIB1 / population1;
    SP1 = population1 + area1 + PIB1 + turisticPoints1 + PIBperCapta1 + DP1 *-1;

    printf("Agora adicione as informações da segunda carta");
    printf("\n");
    
    printf("Digite uma letra de A a H(excluindo as anteriormente usadas) para representar o segundo estado: ");
    scanf(" %c", &state2); //espaço antes do %c para o scan não ler o \n do buffer
    
    code2[4] = state2;
    strcat(code2, "02");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName2);

    printf("Digite a população deste estado: ");
    scanf(" %lu", &population2);

    printf("Digite a área deste estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos deste estado deste estado: ");
    scanf("%d", &turisticPoints2);
    printf("\n");
    
    DP2 = population2 / area2 ;
    PIBperCapta2 = PIB2 / population2;
    SP2 = population2 + area2 + PIB2 + turisticPoints2 + PIBperCapta2 + DP2 *-1;

    //Menu
    printf("Comparação das Cartas: \n"); 
    
    printf("Escolha até dois atributos das cartas para comparação digitando o número correspondente: \n\n");
    do
    {
        if (selec1 == 0 || selec2 == 0) {
        if (selec1 != 1 && selec2 != 1) { printf("1 - Informações completas das Cartas\n"); }
        if (selec1 != 2 && selec2 != 2) { printf("2 - População\n"); }
        if (selec1 != 3 && selec2 != 3) { printf("3 - Área\n"); }
        if (selec1 != 4 && selec2 != 4) { printf("4 - PIB\n"); }
        if (selec1 != 5 && selec2 != 5) { printf("5 - PIB per capta\n"); }
        if (selec1 != 6 && selec2 != 6) { printf("6 - Número de pontos turísticos\n"); }
        if (selec1 != 7 && selec2 != 7) { printf("7 - Densidade demográfica\n"); }
        if (selec1 != 8 && selec2 != 8) { printf("8 - Poder\n"); }
    }
    if (selec1 == 0) {
        printf("Sua escolha: ");
        scanf(" %d", &escolha);
        if (escolha >= 1 && escolha <= 8) {selec1 = escolha;} else {
            printf("Seleção inválida. Faça escolhas somente no intervalo especificado.\n");
        }
    } else if (selec2 == 0) {printf("Agora selecione o segundo atributo: ");
        scanf(" %d", &escolha);
        if (escolha == selec1) {
            printf("Não é possível fazer duas escolhas iguais.\n\n");
        } else if (escolha >= 1 && escolha <= 8) {
            selec2 = escolha;
            escolha = 0;
        } else { 
            printf("Seleção inválida. Tente novamente.\n\n");
        }
    }
    } while (escolha != 0);
    printf("\n");

    sum1 = 0;
    sum2 = 0;
    print = selec1;
    do
    {
    switch (print)
    {
    case 1:
    printf("Carta 1 \n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", cityName1);
    printf("População: %lu\n", population1);
    printf("Área: %.1f\n", area1);
    printf("Densidade polulacional: %.2f\n", DP1);
    printf("PIB per capta: %.2f\n", PIBperCapta1);
    printf("Número de pontos turisticos: %d\n", turisticPoints1);
    printf("Super Poder: %f\n", SP1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", cityName2);
    printf("População: %lu\n", population2);
    printf("Área: %.1f\n", area2);
    printf("Densidade polulacional: %.2f\n", DP2);
    printf("PIB per capta: %.2f\n", PIBperCapta2);
    printf("Número de pontos turisticos: %d\n", turisticPoints2);
    printf("Super Poder: %.2f\n", SP2);
    printf("\n");
        break;
    case 2:
        printf("População - %s x %s\n Carta 1: %lu\n Carta 2: %lu\n Resultado: %s\n", 
            cityName1,cityName2, population1, population2, 
            population1 > population2 ? "Carta 1 venceu" : population1 < population2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + population1;
            sum2 = sum2 + population2;
            printf("\n");
        break;
    case 3:
        printf("Área - %s x %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1,cityName2, area1, area2, 
            area1 > area2 ? "Carta 1 venceu" : area1 < area2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + area1;
            sum2 = sum2 + area2;
            printf("\n");
        break;
    case 4:
        printf("PIB  - %s x %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1,cityName2, PIB1, PIB2, 
            PIB1 > PIB2 ? "Carta 1 venceu" : PIB1 < PIB2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + PIB1;
            sum2 = sum2 + PIB2;
            printf("\n");
        break;
    case 5:
        printf("PIB per capita - %s x %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1,cityName2, PIBperCapta1, PIBperCapta2, 
            PIBperCapta1 > PIBperCapta2 ? "Carta 1 venceu" : PIBperCapta1 < PIBperCapta2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + PIBperCapta1;
            sum2 = sum2 + PIBperCapta2;
            printf("\n");
        break;
    case 6:
        printf("Pontos turísticos - %s x %s\n Carta 1: %d\n Carta 2: %d\n Resultado: %s\n", 
            cityName1,cityName2, turisticPoints1, turisticPoints2, 
            turisticPoints1 > turisticPoints2 ? "Carta 1 venceu" : turisticPoints1 < turisticPoints2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + turisticPoints1;
            sum2 = sum2 + turisticPoints2;
            printf("\n");
        break;        
    case 7:
        printf("Densidade populacional - %s x %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1,cityName2, DP1, DP2, 
            DP1 < DP2 ? "Carta 1 venceu" : DP1 > DP2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + DP1;
            sum2 = sum2 + DP2;
            printf("\n");
        break;
    case 8:
        printf("Poder - %s x %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1,cityName2, SP1, SP2, 
            SP1 < SP2 ? "Carta 1 venceu" : SP1 > SP2 ? "Carta 2 venceu" : "Empate");
            sum1 = sum1 + SP1;
            sum2 = sum2 + SP2;
            printf("\n");
        break;
        break;
    }
    if (print == selec2){print = 0;} else {print = selec2;};
    printf("Soma: %s\n", sum1 > sum2 ? "Carta 1 venceu  \n" : sum1 < sum2 ? "Carta 2 venceu \n" : "Empate\n");
    } while (print != 0);
    return 0;
}