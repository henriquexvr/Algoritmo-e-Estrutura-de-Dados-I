#include <stdio.h>
#include <stdbool.h>


int main(void){
        int num, soma = 0;
        do{
            printf("Escreva um numero inteiro:\n");
            scanf("%d", &num);
            if(num < 0){
                break;
            }
            else{
                soma = soma + num;
            }
        }
        while(true);        
        printf("A soma total dos numeros digitados eh: %d", soma);
    return 0;
}