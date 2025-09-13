/*Implementar um algoritmo que solicita um número inteiro ao usuário, calcule e mostre o seu
fatorial. Exemplo: o fatorial de 5 = 5! = 5 * 4 * 3 * 2 * 1.*/
#include <stdio.h>

int main(){
    int N, i = 1, mult;
    printf("Escreva um numero inteiro: \n");
    scanf("%d", &N);
        mult = N;
    while(i < N){
        mult = mult * (N - i);
        i++;
    }
    printf("O fatorial de %d eh: \n%d",N , mult);
    return 0;
}