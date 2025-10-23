#include<stdio.h>
#include<stdlib.h>

int main(){
    int base, altezza;
    printf("Inserisci la base del triangolo:");
    scanf("%d", &base);
    printf("Inserisci l'altezza del triangolo:");
    scanf("%d", &altezza);
    float area = ((float)base * altezza) /2;
    printf("Area = %.2f", area);
    return 0;
}
