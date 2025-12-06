#include <stdio.h>
#include <string.h>

int main(){
    FILE * arquivo;
    arquivo = fopen("poema.txt", "r");
    if(arquivo = NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char palavra[100], palavraLida[100];
    int numRepeticoes = 0, comparacao;

    scanf("%s", palavra);   

    while((fscanf(arquivo, "%s", palavraLida)) != EOF){
        //strcmp teronar 0 quando as palavras são iguais
        comparacao = strcmp(palavra, palavraLida);
        if(comparacao == 0){
             numRepeticoes++;
        }
    }
    
    fclose(arquivo);

    printf("A palavra \"%s\" repete %d vezes",palavra, numRepeticoes);
    return 0;
}