#include <stdio.h>

void imprime_bom_dia(void){
    printf("Bom dia");
}
double log(double numero, double base){
    double res = log10(numero)/log10(base);
    return res;
}

int soma (float a, float b){
    int res = a + b;
    return res;
}
int main(){
    double n1, n2;
    float n3, n4;
    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &n3, &n4);
    imprime_bom_dia();
    double re1 = log(n1, n2);
    int res2 = soma(n3, n4);
    return 0;
}