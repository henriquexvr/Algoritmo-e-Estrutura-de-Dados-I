#include <stdio.h>

int main(){
    FILE * arq;
    arq = fopen("poema.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo");
    }

    int quantidadeDeLinha = 0;
    char c;

    while((c = fgetc(arq)) != EOF){
        if(c == '\n'){
            quantidadeDeLinha++;
        }
    }

    fclose(arq);
    printf("%d\n", quantidadeDeLinha);
    printf("Fim do programa\n");
    return 0;
}