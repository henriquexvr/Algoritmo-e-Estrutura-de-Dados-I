#include <stdio.h>

int main(){
    FILE *arquivo;

    arquivo = fopen("notas_alunos.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 0;
    }

    int numAlunos;
    float nota;
    char nome[100];

    printf("Quantos alunos deseja registar?\n");
    scanf("%d", &numAlunos);


    for(int i = 0; i < numAlunos; i++){
        printf("Escreva o seu nome: ");
        scanf("%s", &nome);
        printf("Escreva a sua nota");
        scanf("%f", &nota);

        fprintf(arquivo, "%s %.2f\n", nome, nota);
    }


    fclose(arquivo);
    printf("Fim do programa");
    return 0;
}