#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main() {
    
    char state1, state2, code1[4], code2[4], cityName1[26], cityName2[26];
    unsigned long int population1, population2;
    float area1, area2, PIB1, PIB2, DP1, DP2, PIBperCapta1, PIBperCapta2, SP2, SP1;
    int turisticPoints1, turisticPoints2, selec;
    
    printf("\n");
    printf("Adicione as informações da primeira carta \n");

    printf("Digite uma letra de A a H pra representar o primeiro estado: ");
    scanf("%c", &state1);
    
    code1[3] = state1;
    strcat(code1, "01");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName1);

    printf("Digite a população deste estado: ");
    scanf("%lu", &population1);

    printf("Digite a área deste estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos deste estado: ");
    scanf("%d", &turisticPoints1);
    printf("\n");

    DP1 = area1 / population1;
    PIBperCapta1 = PIB1 / population1;
    SP1 = population1 + area1 + PIB1 + turisticPoints1 + PIBperCapta1 + DP1 *-1;

    printf("Agora adicione as informações da segunda carta");
    printf("\n");
    
    printf("Digite uma letra de A a H(excluindo as anteriormente usadas) para representar o segundo estado: ");
    scanf(" %c", &state2); //espaço antes do %c para o scan não ler o \n do buffer
    
    code2[3] = state2;
    strcat(code2, "02");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName2);

    printf("Digite a população deste estado: ");
    scanf("%lu", &population2);

    printf("Digite a área deste estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos deste estado deste estado: ");
    scanf("%d", &turisticPoints2);
    printf("\n");
    
    DP2 = area2 / population2;
    PIBperCapta2 = PIB2 / population2;
    SP2 = population2 + area2 + PIB2 + turisticPoints2 + PIBperCapta2 + DP2 *-1;

    //Menu
    printf("Comparação das Cartas: \n"); 
    
    printf("Escolha um atributo das cartas para comparação digitando o número correspondente \n 1 - Informações completas das Cartas \n 2 - População \n 3 - Área \n 4 - PIB \n 5 - Número de pontos turísticos \n 6 - Densidade demográfica \n");
    printf("Sua escolha: ");
    scanf("%d", &selec);
    printf("\n");

    switch (selec)
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
        printf("População - %s\n Carta 1: %lu\n Carta 2: %lu\n Resultado: %s\n", 
            cityName1, population1, population2, 
            population1 > population2 ? "Carta 1 venceu" : population1 < population2 ? "Carta 2 venceu" : "Empate");
        break;
    case 3:
        printf("Área - %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1, area1, area2, 
            area1 > area2 ? "Carta 1 venceu" : area1 < area2 ? "Carta 2 venceu" : "Empate");
        break;
    case 4:
        printf("PIB per capita - %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1, PIBperCapta1, PIBperCapta2, 
            PIBperCapta1 > PIBperCapta2 ? "Carta 1 venceu" : PIBperCapta1 < PIBperCapta2 ? "Carta 2 venceu" : "Empate");
        break;
    case 5:
        printf("Pontos turísticos - %s\n Carta 1: %d\n Carta 2: %d\n Resultado: %s\n", 
            cityName1, turisticPoints1, turisticPoints2, 
            turisticPoints1 > turisticPoints2 ? "Carta 1 venceu" : turisticPoints1 < turisticPoints2 ? "Carta 2 venceu" : "Empate");
        break;
    case 6:
        printf("Densidade populacional - %s\n Carta 1: %.2f\n Carta 2: %.2f\n Resultado: %s\n", 
            cityName1, DP1, DP2, 
            DP1 < DP2 ? "Carta 1 venceu" : DP1 > DP2 ? "Carta 2 venceu" : "Empate");
        break;
    default:
        break;
    }
    return 0;
}