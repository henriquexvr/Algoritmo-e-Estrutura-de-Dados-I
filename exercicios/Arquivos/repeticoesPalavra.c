#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq;
    char string[100], string2[100];
    int repeticoes = 0, comparacao;

    arq = fopen("poema.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
    }
    printf("Qual palavra voce quer buscar?\n");
    scanf("%s", string);

    while(fscanf(arq, "%s", string2) != EOF){
        comparacao = strcmp(string, string2); //strcmp retorna 0 se as strings forem iguais
        if(comparacao == 0){
            repeticoes++;
        }
    }

    fclose(arq);

    printf("A string %s repete %d vezes.\n", string, repeticoes);
    return 0;
}