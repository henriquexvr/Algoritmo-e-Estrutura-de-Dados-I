#include <stdio.h>

int main(){
    FILE *arquivoLeitura, *arquivoEscrita;
    char leitor[1000];


    arquivoLeitura = fopen("arquivo_de_origem.txt", "r"); //r -> Abre o arquivo somente para leitura
    arquivoEscrita = fopen("arquivo_de_destino.txt", "w"); //w -> cria um novo arquivo SOMENTE para escrita, se ja existir ele apaga o conteu já escrito
    
    if(arquivoLeitura == NULL || arquivoEscrita == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while(fgets(leitor, sizeof(leitor), arquivoLeitura) != NULL){ // fgets -> faz a leitura de uma linha do arquivo, ele vai fazer isso enquanto o arquivo for diferente de NULL
        fputs(leitor, arquivoEscrita); //fputs -> Vai escrever no arquivo que está determinado dentro da sua função
    }

    fclose(arquivoLeitura);
    fclose(arquivoEscrita);

    printf("Fim do programa!");
    return 0;
}