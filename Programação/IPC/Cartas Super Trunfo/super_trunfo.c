#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main() {
    
    char state1;
    char state2;
    char code1[3];
    char code2[3];
    char cityName1[26];
    char cityName2[26];
    unsigned long int population1;
    unsigned long int population2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    float DP1;
    float DP2;
    float PIBperCapta1;
    float PIBperCapta2;
    int turisticPoints1;
    int turisticPoints2;
    float SP1;
    float SP2;
    bool verif;

    printf("Adicione as informações da primeira carta");

    printf("Digite uma letra de A a H pra representar o primeiro estado: ");
    scanf("%c", &state1);
    
    code1[3] = estate1;
    strcat(code1, "01");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName1);

    printf("Digite a população deste estado: ");
    scanf("%lu", &population1);

    printf("Digite a área deste estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos deste estado deste estado: ");
    scanf("%d", &turisticPoints1);
    printf("\n");

    DP1 = area1 / population1;
    PIBperCapta1 = PIB1 / population1;
    SP1 = population1 + area1 + PIB1 + turisticPoints1 + PIBperCapta1 + DP1 *-1;

    printf("Agora adicione as informaões da segunda carta");
    printf("\n");
    
    printf("Digite uma letra de A a H(excluindo as anteriormente usadas) para representar o segundo estado: ");
    scanf(" %c", &state2); //espaço antes do %c para o scan não ler o \n do buffer
    
    code2[3] = estate2;
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

    printf("Carta 1 \n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", cityName1);
    printf("População: %lu\n", population1);
    printf("Área: %.1f\n", area1);
    printf("Densidade polulacional: %.2f\n", DP1);
    printf("PIB per capta: %.2f\n", PIBperCapta1);
    printf("Número de pontos turisticos: %d\n", turisticPoints1);
    printf("Super Poder: %f", SP1);
    printf("\n");

    printf("Carta 2");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", cityName2);
    printf("População: %lu\n", population2);
    printf("Área: %.1f\n", area2);
    printf("Densidade polulacional: %.2f\n", DP2);
    printf("PIB per capta: %.2f\n", PIBperCapta2);
    printf("Número de pontos turisticos: %d", turisticPoints2);
    printf("Super Poder: %.2f", SP2);
    printf("\n");
    
    printf("Comparação das Cartas: \n"); 
    
    verif = population1 > population2;
    printf("População : %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = area1 > area2;
    printf("Área: %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = PIB1 > PIB2;
    printf("PIB: %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = turisticPoints1 > turisticPoints2;
    printf("Pontos turisticos : %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = DP1 < DP2;
    printf("Densidade populacional : %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = PIBperCapta1 > PIBperCapta2;
    printf("PIB per capta : %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    
    verif = SP1 > SP2;
    printf("Super poder: %s\n",verif? "Carta 1 venceu" : "Carta 2 venceu");
    /*
    Sem estruturas condicionais adicionar "bilhões de reais" ou "milhões de reais" 
    manualmente nao é viável ja que a variavel é do tipo float(Na terceira parte do desafio é possivel)
    Nota1: meu pai amado como trabalhar com string em C é estranho, Jesus...
    Nota2: O C ainda continua com bug visual no VSCode(caracteres especiais)
    */
    return 0;
}