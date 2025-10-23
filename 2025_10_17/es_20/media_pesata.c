#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, num3, peso1, peso2, peso3;
    printf("Inserisci il numero 1:");
    scanf("%d", &num1);
    printf("Inserisci il numero 2:");
    scanf("%d", &num2);
    printf("Inserisci il numero 3:");
    scanf("%d", &num3);
    printf("Inserisci il peso 1:");
    scanf("%d", &peso1);
    printf("Inserisci il peso 2:");
    scanf("%d", &peso2);
    printf("Inserisci il peso 3:");
    scanf("%d", &peso3);

    float media = ((float)num1 * peso1 + num2 * peso2 + num3 *peso3) / (peso1 + peso2 + peso3);
    printf("Questa è la media pesata: %.2f", media);
    return 0;
}