#include <stdio.h>

int main(void){
    int num1, num2, resultado = 0;
    printf("Escreva numeros inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    for(int i = 1; i <= num1; i++){
        //resultado = resultado + num2;
        resultado += num2;
    }
    printf("Resultado: %d", resultado);
    return 0;
}