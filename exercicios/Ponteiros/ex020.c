#include <stdio.h>
void menorEmaiorValor(int *n1Ptr, int *n2Ptr){ // As variaveis apontam para o endereço de n1 e n2 (São ponteiros)
    int aux;
    if(*n2Ptr > *n1Ptr){
        aux = *n1Ptr;
        *n1Ptr = *n2Ptr;
        *n2Ptr = aux;
    }
}

int main(){
    int n1, n2;
    printf("Escreva dois valores inteiros: \n");
    scanf("%d %d", &n1, &n2);

    menorEmaiorValor(&n1, &n2); //O ‘&’ pode ser lido como, endereço da variavel. Ou seja, a função recebe o endereço das variaveis n1 e n2

    printf("%d > %d", n1, n2);
    return 0;
}