#include <stdio.h>

int main(){
    FILE * arquivo;
    arquivo = fopen("arquivo1","w");
     if(arquivo == NULL){
        printf("Erro ao criar o arquivo");
        return -1;
     }
     
     printf("Arquivo criado!");

    for(int i = 1; i <= 10; i++){
        fprintf(arquivo, "%d\n", i);
    }
    fclose(arquivo);
    return 0;
}