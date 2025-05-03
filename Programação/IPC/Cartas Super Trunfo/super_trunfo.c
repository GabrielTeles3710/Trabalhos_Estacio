#include <stdio.h> 
#include <string.h>

int main() {
    
    char estate1;
    char estate2;
    char code1[3];
    char code2[3];
    char cityName1[26];
    char cityName2[26];
    int population1;
    int population2;
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

    printf("Adicione as informações da primeira carta");

    printf("Digite uma letra de A a H pra representar o primeiro estado: ");
    scanf("%c", &estate1);
    
    code1[3] = estate1;
    strcat(code1, "01");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName1);

    printf("Digite a população deste estado: ");
    scanf("%d", &population1);

    printf("Digite a área deste estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos deste estado deste estado: ");
    scanf("%d", &turisticPoints1);
    printf("\n");

    DP1 = area1 / population1;
    PIBperCapta1 = PIB1 / population1;

    printf("Agora adicione as informaões da segunda carta");
    printf("\n");
    
    printf("Digite uma letra de A a H(excluindo as anteriormente usadas) para representar o segundo estado: ");
    scanf(" %c", &estate2); //espaço antes do %c para o scan não ler o \n do buffer
    
    code2[3] = estate2;
    strcat(code2, "02");
    
    printf("Digite o nome de uma cidade presente neste estado: ");
    scanf("%s", cityName2);

    printf("Digite a população deste estado: ");
    scanf("%d", &population2);

    printf("Digite a área deste estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB deste estado: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos deste estado deste estado: ");
    scanf("%d", &turisticPoints2);
    printf("\n");
    
    DP2 = area2 / population2;
    PIBperCapta2 = PIB2 / population2;

    printf("Carta 1 \n");
    printf("Estado: %c\n", estate1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", cityName1);
    printf("Polulação: %d\n", population1);
    printf("Área: %.1f\n", area1);
    printf("Densidade polulacional: %.2f\n", DP1);
    printf("PIB per capta: %.2f\n", PIBperCapta1);
    printf("Número de pontos turisticos: %d\n", turisticPoints1);
    printf("\n");

    printf("Carta 2");
    printf("Estado: %c\n", estate2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", cityName2);
    printf("Polulação: %d\n", population2);
    printf("Área: %.1f\n", area2);
    printf("Densidade polulacional: %.2f\n", DP2);
    printf("PIB per capta: %.2f\n", PIBperCapta2);
    printf("Número de pontos turisticos: %d", turisticPoints2);
    printf("\n");
    /*
    Sem estruturas condicionais adicionar "bilhões de reais" ou "milhões de reais" 
    manualmente nao é viável ja que a variavel é do tipo float
    Nota1: meu pai amado como trabalhar com string em C é ineficiente, Jesus...
    Nota2: O C ainda continua com bug visual no VSCode(caracteres especiais)
    */
    return 0;
}