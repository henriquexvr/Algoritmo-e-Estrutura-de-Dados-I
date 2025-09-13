/*Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci. Ex.: Se
n = 10, imprimir os 10 primeiros números da sequência de Fibonacci.
22. */

#include <stdio.h>
#include <stdbool.h>

int main(){
    int soma = 0, n1 = 0, n2 = 1;
    int N, tester;
   
    do{
        printf("Escreva um numero inteiro:\n");
        scanf("%d", &N);
        if(N >= 0){
            tester = 0;
            for(int i = 0; i < N; i++){
                printf("%d + %d =", n1, n2);
                soma = n1 + n2;
                printf(" %d\n", soma);
                n1 = n2;
                n2 = soma;
            }
        }
        else{
            tester = 1;
            printf("Escreva o numero novamente:\n");
        }
    }while(tester == 1);
    
    return 0;
}