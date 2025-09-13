/*Implementar um algoritmo que recebe um número inteiro N fornecido pelo usuário e mostre a soma
dos números ímpares de 0 até N (incluindo N, se N for ímpar).*/

#include <stdio.h>

int main(){
    int N, soma = 0, i = 0;
    printf("Escreva um numero inteiro: \n");
    scanf("%d", &N);

    while(i <= N){
        if(i % 2 != 0){
            soma += i;
        }
        i++;
    }
    printf("SOMA DOS NUMEROS IMPARES DE 0 ATE N: %d\n", soma);
    return 0;
}