#include<stdio.h>
#include<stdlib.h>

int main(){
    int volt, ohm;
    printf("Inserisci la tensione:");
    scanf("%d", &volt);
    printf("Inserisci la resistenza:");
    scanf("%d", &ohm);
    float ampere = (float)volt / ohm;
    printf("Corrente = %f", ampere);
    return 0;
}