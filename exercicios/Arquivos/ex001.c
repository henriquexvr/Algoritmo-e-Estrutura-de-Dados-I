#include <stdio.h>

int main(){
    FILE * arq = fopen("arquivo4.txt", "w");
    if(arq ==  NULL){
        printf("Erro ao criar o arquivo");
        return -1;
    }
    printf("Escreva a palavra 'string':\n");
    fputc('s', arq);
    fputc('t', arq);
    fputc('r', arq);
    fputc('i', arq);
    fputc('n', arq);
    fputc('g', arq);
    fputc('\n', arq);
    fputc('1', arq);
    fclose(arq);
    printf("Arquivo4 criado");
    return 0;
}