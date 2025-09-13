#include <stdio.h>

int main(void){
    int a, b ,c, aux;
    printf("Digite tres numero separados por espacos\n");
    scanf("%d %d %d", &a, &b, &c);
     if(b > a && b > c){//Verificando se o valor em B é maior
        aux = a;
        a = b;
        b = aux;
     }
     else if(c > a && c > b){//Verificando se o valor em C é maior
        aux = a;
        a = c;
        c = aux;
    }
    if(c > b){
        aux = b;
        b = c;
        c = aux;
    }
    printf("O numero em ordem crescente sao:\n %d\n %d \n%d", a, b, c);
    return 0;
}