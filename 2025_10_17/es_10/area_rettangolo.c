#include<stdio.h>
#include<stdlib.h>

int main(){
    int base, altezza;
    printf("Inserisci la base del rettangolo:");
    scanf("%d", &base);
    printf("Inserisci l'altezza del rettangolo:");
    scanf("%d", &altezza);
    printf("Area = %d\nPerimetro = %d", base * altezza, base + altezza);
    return 0;
}
