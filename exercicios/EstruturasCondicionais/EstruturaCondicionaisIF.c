#include <stdio.h>


int main(void){
        int num;
        printf("Escreva um numero inteiro: ");
        scanf("%d", &num);

        if(num <= 20){
            printf("O numero digitado eh menor que 20.");
        }
        printf("\nPROGRAMA FINALIZADO");
    return 0;
}