#include <stdio.h>

void lerNumerosInt(){
    int a, b, c, *aPtr, *bPtr, *cPtr;
    printf("Escreva tres numeros inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    aPtr = &a;
    bPtr = &b;
    cPtr = &c;

    printf("NOME_VARIAVEL    ENDERECO    VALOR\n");
    printf("\ta");
    printf("\t%p", aPtr);
    printf("\t%d\n", a);

    printf("\tb");
    printf("\t%p", bPtr);
    printf("\t%d\n", b);

    printf("\tc");
    printf("\t%p", cPtr);
    printf("\t%d\n", c);
}

int main(){
    lerNumerosInt();
    return 0;
}