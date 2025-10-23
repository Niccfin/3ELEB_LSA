#include<stdio.h>
#include<stdlib.h>

int main(){
    int anni;
    printf("Inserisci la tua età in anni:");
    scanf("%d", &anni);
    long int secondi = anni * 365 * 24 * 3600;
    printf("Sono %d secondi", secondi);
    return 0;
}