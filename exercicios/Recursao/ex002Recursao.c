#include <stdio.h>

int funcaoRescursiva(int n1, int n2){
    if(n2 != 0){
        return n1 + funcaoRescursiva(n1, n2 - 1);
    }
    return 0;
    
}

int main (){
    int n1, n2;
    printf("Escreva dois numeros inteiros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int res = funcaoRescursiva(n1, n2);
    
    printf("\n%d", res);
    return 0;
}