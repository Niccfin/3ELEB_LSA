#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int cateto1, cateto2;
    printf("Inserisci il primo cateto:");
    scanf("%d", &cateto1);
    printf("Inserisci il secondo cateto:");
    scanf("%d", &cateto2);
    float ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    printf("Ipotenusa = %f", ipotenusa);
    
    return 0;
}
