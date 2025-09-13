#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, y;
    printf("Digite tres numeros reais: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    y = a + b*c + a + 2* (a - b)+ log10(64);
    printf("y = %.3lf", y);
return 0;
 }