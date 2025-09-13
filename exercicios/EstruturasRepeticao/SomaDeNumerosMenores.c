/*Implementar um algoritmo que recebe solicita ao usuário um número inteiro N e mostra a soma de
todos os números positivos menores ou iguais a N que são divisíveis por 3 ou por 5, mas não por
ambos. Exemplo: para N==20, a soma é 3+5+6+9+10+12+18+20 = 83.*/
#include <stdio.h>

int main(){
    int N, soma = 0;
    printf("Escreva um numero inteiro: \n");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        if((i % 3 == 0 || i % 5 == 0) && !(i % 3 == 0 && i % 5 == 0)){
            soma = soma + i;
        }
    }
    printf("O RESULTADO DA SOMA EH:\n%d", soma);
    return 0;
}