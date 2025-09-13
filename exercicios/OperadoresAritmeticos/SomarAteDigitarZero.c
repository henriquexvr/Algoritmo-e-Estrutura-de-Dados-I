#include <stdio.h>


int main(){
    int numDigitado, somaNum = 0;
    
    printf("Escreva um numero inteiro: \n");
    scanf("%i", &numDigitado);
    
    while (numDigitado != 0){
        printf("Escreva outro numero inteiro: \n");
        scanf("%i", &numDigitado);
        somaNum = somaNum + numDigitado;
    }

    printf("A soma total dos numeros digitados eh: %i", somaNum);
}