#include <stdio.h>

int main(void){
    float tempC, tempF;
    printf("Escreva a temperatura em Celsius: ");
    scanf("%f", &tempC);
    tempF = (tempC * 1.8)+32;
    printf("A temperatura em Fahrenheit eh: %.2f", tempF);
    return 0;
}


