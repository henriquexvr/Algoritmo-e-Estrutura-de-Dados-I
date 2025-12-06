#include <stdio.h>

int main(){
    int valor1, valor2;
    FILE *arq = fopen("arquivo5.txt", "r+");

    if(arq == NULL){
        printf("Erro ao criar o arquvivo.\n");
    }
    printf("Arquivo aberto.\n");

    do{
        printf("Digite dois valores separados por um espaço.\n");
        printf("Para parar o programa, escreva '0 0':\n");
        scanf("%d %d", &valor1, &valor2);
        if(valor1 != 0 || valor2 !=0){
            fprintf(arq, "%d %d ", valor1, valor2);
        } 
    }while(valor1 != 0 || valor2 != 0);
    fclose(arq);
    printf("Arquivo fechado.");

    return 0;
}