#include<stdio.h>
#include<stdlib.h>

int main(){
    float temp;
    printf("inserisci una temperatura:");
    scanf("%f", &temp);
    float f = (temp * 1.8) + 32;
    float k = temp + 273.15;
    printf("Ci sono %.2f F e %.2f K", f, k);
    return 0;   
}
