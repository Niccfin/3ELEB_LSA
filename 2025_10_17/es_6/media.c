#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero1, numero2;
    printf("Inserisci il primo numero:");
    scanf("%d", &numero1);
    printf("Inserisci il secondo numero:");
    scanf("%d", &numero2);
    float media = ((float)numero1 * numero2)/2;
    printf("Media = %f", media);
    return 0;
}
