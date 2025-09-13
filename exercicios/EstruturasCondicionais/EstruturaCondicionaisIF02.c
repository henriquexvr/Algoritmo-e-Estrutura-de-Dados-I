#include <stdio.h>

int main(void){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    if(num > 20){
        printf("O numero digitado eh maior do que 20.");
    }
    
    else if(num <= 20 && num >= 16){
        printf("O numero digitado eh maior do que 15.");
    }
    
    else if(num <= 15 && num >= 11){
        printf("O numero digitado eh maior do que 10.");
    }
    
    else if(num >=6 && num <= 10){
        printf("O numero digitado eh maior do que 5.");
    }
    else{
        printf("O numero não atendeu a nenhuma verificacao");
    }
    return 0;
}