#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main() {
    int movi,loop;

    printf("Movimento da rainha: \n");
    movi = 8;
    loop = 1;
    do
    {
        printf("Esquerda \n");   
        loop = loop + 1;
    } while (loop <= movi);
    printf("\n");

    printf("Movimento da torre: \n");
    movi = 5;
    loop = 1;
    do
    {
        printf("Direita\n");
        loop = loop + 1;  
    } while (loop <= movi);
    printf("\n");

    printf("Movimento do bispo: \n");
    movi = 5;
    loop = 1;
    do
    {
        printf("Direita\nCima \n");
        loop = loop + 1;  
    } while (loop <= movi);
    printf("\n");

    printf("Movimento do cavalo: \n");
    movi = 3;
    for (int i = 1; i < movi; i++)
    {
        while (i < movi)
        {
            printf("Baixo, ");
            i++; 
        }
        printf("Equerda\n");
    }
    
    return 0;
}