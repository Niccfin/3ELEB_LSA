#include<stdio.h>
#include<stdlib.h>

int main(){
    float numero;
    printf("Inserisci una distanza in metri:");
    scanf("%f", &numero);
    printf("Centimetri: %f\nMillimetri: %f\nChilometri: %f", numero * 100, numero * 1000, numero / 1000);
    return 0;
}
