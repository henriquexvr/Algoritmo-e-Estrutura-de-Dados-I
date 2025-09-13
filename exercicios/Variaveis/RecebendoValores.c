#include <stdio.h>

int main(void){
    int a, b;
    double var1;
    float var2;
    char c;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);
    printf("Digite dois numeros:\n");
    scanf("%lf %f", &var1, &var2);
    printf("Escreva um caractere:\n");
    fflush(stdin); //Limpa o buffer(lixo) da memoria para que seja possivel ler uma string
    scanf("%c", &c); 

    printf("INTEIROS: %i, %i\nDOUBLE: %.2lf\nFLOAT: %.2f\nCARACTERE: %c\n", a, b, var1, var2, c);
    return 0;
}