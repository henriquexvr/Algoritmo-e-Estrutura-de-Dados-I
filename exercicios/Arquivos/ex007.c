#include <stdio.h>


int main(){
    FILE *arquivo;
    char str[100];
    int quantidadeLinhas = 0;

    arquivo = fopen("poema.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return -1;
    }
     printf("Arquivo aberto\n");

     //Leitura de linhas
     while(fgets(str, sizeof(str), arquivo) != NULL){
        quantidadeLinhas++;
     }

     printf("O poema tem %d linhas\n", quantidadeLinhas);

    fclose(arquivo);
    printf("Arquivo fechado");
    return 0;
}