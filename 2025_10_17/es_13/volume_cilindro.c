#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int raggio, altezza;
    printf("inserisci il raggio:");
    scanf("%d", &raggio);
    printf("inserisci l'altezza:");
    scanf("%d", &altezza);
    float area = M_PI * raggio * raggio * altezza;
    printf("Area = %f", area);
    
    return 0;
}
