#include<stdio.h>
#include<stdlib.h>

int main(){
    int forza, area;
    printf("Inserisci la forza in N:");
    scanf("%d", &forza);
    printf("Inserisci l'area in m2:");
    scanf("%d", &area);
    float pressione = (float)forza / area;
    printf("Pressione = %.2f", pressione);
    return 0;
}