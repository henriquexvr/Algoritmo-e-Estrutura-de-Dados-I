#include <stdio.h>


int main(){
    FILE *arq;
    arq = fopen("poema.txt", "a");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo");
    }

    char nome[1000], data[100];

    printf("Escreva o seu nome: ");
    scanf("%s", nome);
    fputc('\n', arq);
    fputs(nome, arq);

    printf("Escreva a data de hoje (DD/MM/AAAA): ");
    scanf("%s", data);

    fprintf(arq, "\n%s", data);

    fclose(arq);

    printf("Fim do programa!");
    return 0;
}