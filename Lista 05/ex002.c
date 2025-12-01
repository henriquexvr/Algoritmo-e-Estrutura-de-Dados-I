#include <stdio.h>

int main(){
    FILE * arquivo;
    arquivo = fopen("arquivo1","r");
     if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return -1;
     }
    char linha[100];
    int totalLinhas = 0;

    printf("Conteudo do arquivo:\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
        totalLinhas++;
    }
    
    printf("\nNumero total de linhas: %d", totalLinhas);
    fclose(arquivo);
    return 0;
}