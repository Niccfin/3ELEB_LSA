#include<stdio.h>
#include<stdlib.h>

int main(){
    int distanza, velocita;
    printf("inserisci una distanza in chilometri:");
    scanf("%d", &distanza);
    printf("Inserisci la velocità:");
    scanf("%d", &velocita);
    float tempo = ((float)distanza / velocita) * 60;
    printf("Tempo = %f minuti", tempo);
    return 0;
}
