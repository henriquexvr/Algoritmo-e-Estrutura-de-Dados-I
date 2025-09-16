#include <stdio.h>

double soma(int n){
    double S = 1.0;
    for(int i = 1;  i <= n; i++){
        S = S + (1.0/((double)i+1.0));
    }
    return S;
}

int main(){
    int n;
    do{
        printf("Escreva um numero inteiro positivo:\n");
        scanf("%d", &n);
        if(n > 0){
            soma(n);
        }else{
            printf("Valor invalido!! Escreva novamente.\n");
        }
    }while(n <= 0);
    
    printf("S = %.2lf", soma(n));
    return 0;
}