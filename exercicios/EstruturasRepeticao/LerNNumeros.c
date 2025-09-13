#include <stdio.h>

int main(void){
    int n, num, soma = 0;
    float resultado;
    printf("Quantos numeros interos voce deseja inserir?\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Escreva o %d numero:\n", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    resultado = (float)soma/(float)n;
    printf("A media eh %.2f\n", resultado);
    return 0;
}