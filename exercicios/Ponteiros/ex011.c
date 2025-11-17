#include <stdio.h>

int menorValor(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }
    if(b < a && b < c){
        return b;
    }
    if(c < a && c < b){
        return c;
    }
    printf("Algum dos numeros possui valores iguais.");

    return 0;
}

int main(){

    int n1, n2, n3, menorValorRetornado;

    printf("Escreva tres numeros inteiros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    menorValorRetornado = menorValor(n1, n2, n3);
    printf("O menor valor eh %d", menorValorRetornado);
    return 0;
}