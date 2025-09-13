#include <stdio.h>

int main(void){
    int idade, rendaMensal;

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Qual a sua renda mensal?\n");
    scanf("%d", &rendaMensal);

    if(idade >= 65 && rendaMensal >= 3000){
        printf("Solicitacao de cartao de credito: APROVADA");
    }
    else if(idade >= 25 && idade <= 64 && rendaMensal <= 2000){
        printf("Solicitacao de cartao de credito: APROVADA");
    }
    else if(idade >= 18 && idade <= 24 && rendaMensal <= 1500){
        printf("Solicitacao de cartao de credito: APROVADA");
    }
    else if(idade < 18){
        printf("Solicitacao de cartao de credito: REPROVADA");
    }
    else{
        printf("Solicitacao de cartao de credito: REPROVADA");
    }
}