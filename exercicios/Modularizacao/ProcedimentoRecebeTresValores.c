#include <stdio.h>
void ordemCrescente(int num1, int num2, int num3){
    int auxiliar;
    
    if(num2 > num1 && num2 > num3){
        auxiliar = num2;
        num2 = num1;
        num1 = auxiliar;
    }else if(num3 > num1 && num3 > num2){
        auxiliar = num3;
        num3 = num1;
        num1 = auxiliar;
    }
    if(num3 > num2){
        auxiliar = num3;
        num3 = num2;
        num2 = auxiliar;
    }
    printf("%d %d %d", num1, num2, num3);
}

int main(){
    int n1, n2, n3;
    
    printf("Escreva três valores inteiros: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    ordemCrescente(n1, n2, n3);    
    return 0;
}