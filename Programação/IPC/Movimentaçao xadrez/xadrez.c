#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

void rainha();
void torre();
void bispo();
void cavalo();
int movi,loop;

int main() {
    
    rainha();
    torre();
    bispo();
    cavalo();

    return 0;
}

void rainha(){
    
    printf("Movimento da rainha: \n\n");
    movi = 8;
    loop = 1;
    do
    {
        printf("Esquerda \n");   
        loop = loop + 1;
    } while (loop <= movi);
    printf("\n");

};

void torre(){
    
    printf("Movimento da torre: \n\n");
    movi = 5;
    loop = 1;
    do
    {
        printf("Direita\n");
        loop = loop + 1;  
    } while (loop <= movi);
    printf("\n");

};

void bispo(){
    
    printf("Movimento do bispo: \n\n");
    movi = 5;
    loop = 1;
    do
    {
        printf("Direita\nCima \n");
        loop = loop + 1;  
    } while (loop <= movi);
    printf("\n");

};

void cavalo(){
    
    printf("Movimento do cavalo: \n\n");
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
    printf("\n");
};