#include <stdio.h>

void teste(int n, int *bPtr, int *kPtr){
    
    if(n < 0){
        *bPtr = -n;
        *kPtr = 1;
    }else{
        *kPtr = -1;
        *bPtr = -n;
    }

}

int main(){
    int n, b, k;

    printf("Escreva numero inteiro: ");
    scanf("%d", &n);
    //PASSAGEM DE VALOR (n), PASSAGEM DE REFERENCIA (&b, &b)
    teste(n, &b, &k);

    printf("b*k = n, o menor b possivel para dar esse valor eh:%d\n%d*%d=%d", b, b, k, n);
    return 0;
}