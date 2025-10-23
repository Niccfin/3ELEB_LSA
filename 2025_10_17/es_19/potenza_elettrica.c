#include<stdio.h>
#include<stdlib.h>

int main(){
    int volt, ampere;
    printf("Inserisci la tensione:");
    scanf("%d", &volt);
    printf("Inserisci la corrente:");
    scanf("%d", &ampere);
    int potenza = volt * ampere;
    printf("%d", potenza);
    return 0;
}