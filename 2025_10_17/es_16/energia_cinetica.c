#include<stdio.h>
#include<stdlib.h>

int main(){
    int massa, velocita;
    printf("Inserisci la massa in kg:");
    scanf("%d", &massa);
    printf("Inserisci la velocità in m/s:");
    scanf("%d", &velocita);
    float energia = massa * velocita * velocita / 2; 
    printf("Energia cinetica = %fJ", energia);
    return 0;
}