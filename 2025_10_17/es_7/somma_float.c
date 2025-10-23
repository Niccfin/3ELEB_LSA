#include<stdio.h>
#include<stdlib.h>

int main(){
    float numero1, numero2;
    printf("Inserisci il primo numero:");
    scanf("%f", &numero1);
    printf("Inserisci il secondo numero:");
    scanf("%f", &numero2);
    printf("Somma = %f \nDifferenza = %f\nProdotto = %f \nDivisione = %f", numero1 + numero2, numero1 - numero2, numero1 * numero2, numero1 / numero2);
    return 0;
}
