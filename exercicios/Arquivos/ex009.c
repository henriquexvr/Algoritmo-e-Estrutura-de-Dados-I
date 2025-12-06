#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("poema.txt", "a+");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "\nHenrique\n04/12/2025\n");

    fclose(arquivo);

    printf("O arquivo foi fechado.");
    return 0;
}