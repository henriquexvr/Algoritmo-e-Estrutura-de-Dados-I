#include <stdio.h>

int main(void){
    int a, b ,c, maiorNumero, menorNumero, medioNumero;

    printf("Escreva 3 numeros: \n");
    scanf("%d %d %d", &a, &b, &c);


    if(a > b && a > c){
        maiorNumero = a;
        medioNumero = b;
        menorNumero = c;
    }
    else if(a < b && b > c){
        maiorNumero = b;
        medioNumero = a;
        menorNumero = c;
        if(c > a){
            medioNumero = c;
            menorNumero = a;
        }
    }
    else if(c > a && c < b){
        maiorNumero = c;
        medioNumero = a;
        menorNumero = b;
        if(b > a){
            medioNumero = b;
            menorNumero = a;
        }
    }
        a = maiorNumero;
        b = medioNumero;
        c = menorNumero;
    printf("====RESULTADO====");
    printf("\n%d \n%d \n%d", a, b, c);
    return 0;
}

