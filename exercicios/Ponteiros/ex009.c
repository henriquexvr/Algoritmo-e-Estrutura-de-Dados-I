#include <stdio.h>

int testePrimo(int numero){
    int i;
    if(numero <= 1){
        return 0;
    }
    for(i = 2; i < numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }
    if(i == numero){
        return 1;
    }
}

void primo(int m, int *p1Ptr, int *p2Ptr){
    int maiorPrimo = m + 1;
    int menorPrimo = m - 1;
    while(maiorPrimo > 1 && !testePrimo(maiorPrimo)){
        maiorPrimo ++;
    }

    while(menorPrimo > 1 && !testePrimo(menorPrimo)){
        menorPrimo--;
    }

    *p1Ptr = maiorPrimo;
    *p2Ptr = menorPrimo;
}    


int main(){
    int m, p1, p2;
    printf("Escreva o valor de m:\n");
    scanf("%d", &m);

    //PASSAGEM DE VALOR (m), PASSAGEM DE REFERENCIA (&p1, &p1)
    primo(m, &p1, &p2);

    printf("O maior numemor primo antes de %d eh: %d\n", m, p2);
    printf("O maior numemor primo depois de %d eh: %d\n", m, p1);
    
    return 0;
}