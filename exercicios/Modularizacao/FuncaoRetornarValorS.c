/* Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e retorne
o valor da soma S, definida pela equação abaixo:
*/

#include <stdio.h>
#include <math.h>
double numerador(int n){
    return (double)n * n + 1;
}
double denominador(int n){
    return (double)n+3;
}
double soma(int n){
    double S = 0.0;

    for(int i = 1; i <= n; i++){
        S = S + (numerador(i)/denominador(i));
    }
    return S;
}

int main(){
    int n;
    do{
        printf("Escreva um numero inteiro postivio: \n");
        scanf("%d", &n);
        if(n > 0){
            numerador(n);
            denominador(n);
        }
        else{
            printf("Valor Invalido!! Escreva novamente.\n");
        }
    }while(n < 0);

    printf("SOMA = %.2lf", soma(n));
    return 0;
}