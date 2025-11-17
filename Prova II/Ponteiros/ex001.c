#include <stdio.h>

int main(){
    int idade, *idadePtr;
    float altura, *alturaPtr;
    char sexo, *sexoPtr;
    printf("Escreva a sua idade: ");
    scanf("%d", &idade);

    printf("Escreva a sua altura: ");
    scanf("%f", &altura); //Leia um número real do teclado e guarde esse valor no endereço onde a variável altura.

    fflush(stdin);

    printf("Escreva qual o seu sexo (M/F): ");
    scanf("%c", &sexo); 

    idadePtr = &idade; //Faça com que o ponteiro idadePtr aponte para o endereço da variavel idade
    alturaPtr = &altura; // Faça com que o ponteiro alturaPtr aponte para o endereço da variavel altura
    sexoPtr = &sexo; // Faça com que o ponteiro sexoPtr aponte para o endereço da variavel sexo

    printf("\nSua idade eh %d\n", idade);
    printf("Sua altura eh %.2f\n", altura);
    printf("Seu sexo eh %c\n", sexo);

    printf("Escreva novemente:\n");

    printf("Escreva a sua idade: ");
    scanf("%d", &*idadePtr); //Leia um número inteiro (%d) e guarde-o no endereço para onde idadePtr aponta.

    printf("Escreva a sua altura: ");
    scanf("%f", &*alturaPtr); //Leia um numero real e guarde no endereço para qual o ponteiro alturaPtr aponta

    fflush(stdin);

    printf("Escreva qual o seu sexo (M/F): ");
    scanf("%c", &*sexoPtr); //Leixa um caractere e guarde no endereço para qual o ponteiro sexoPtr aponta
    
    printf("\nSua idade eh %d\n", idade);
    printf("Sua altura eh %.2f\n", altura);
    printf("Seu sexo eh %c\n", sexo);
    
    return 0;
}