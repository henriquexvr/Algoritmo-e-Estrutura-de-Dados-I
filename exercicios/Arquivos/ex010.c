#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    int N, *vetor; //tamanho do vetor e vetor alocadi dinamicamente
    //char strN[100];
    arquivo = fopen("dados_vetor.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fscanf(arquivo, "%d\n", &N); 
    printf("%d\n", N);
    vetor = (int *) malloc(N *sizeof(int));

    for(int i = 0; i < N; i++){
        fscanf(arquivo, "%d\n", &vetor[i]);
    }


    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }
    fclose(arquivo);
    return 0;
}