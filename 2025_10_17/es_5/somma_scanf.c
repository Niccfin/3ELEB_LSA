#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero1;
    int numero2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero2);
    printf("Somma = %d \nDifferenza = %d", numero1 + numero2, numero1 - numero2);
    return 0;
}
