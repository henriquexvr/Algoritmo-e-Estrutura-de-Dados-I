#include <stdio.h>

int main(void){
    char caractere;
    printf("Escreva alguma pontuação textual:\n");
    scanf("%c", &caractere);
    
    switch(caractere){
        case ';':
            printf("Ponto e virgula");
            break;
        case '.':
            printf("Ponto");
            break;
        case ',':
            printf("Virgula");
            break;
        default:
            printf("Não é pontuação");
    }
    return 0;
}