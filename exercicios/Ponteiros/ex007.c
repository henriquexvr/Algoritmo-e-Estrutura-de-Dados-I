#include <stdio.h>

int main (){
    int n1, *n1Ptr, n2, *n2Ptr;
    printf("Escreva dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    n1Ptr = &n1;
    n2Ptr = &n2;

    if(n1Ptr > n2Ptr){
        printf("O endereco de n1 (%p) e maior que o de n2 (%p)", n1Ptr, n2Ptr);
    }else{
        printf("O endereco de n2 (%p) e maior que o de n1 (%p)", n2Ptr, n1Ptr);
    }
    
    return 0;
}