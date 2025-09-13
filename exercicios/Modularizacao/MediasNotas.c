/*Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma letra. Se a
letra for "A", o procedimento calcula e escreve a média aritmética das notas do aluno, se for "P",
calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Escreva também um programa main
que leia 3 notas de n alunos e acione o procedimento para cada aluno*/
#include <stdio.h>
void calculaMedias(float nota1, float nota2, int nota3, char tipoMedia){
    if(tipoMedia == 'A'){
        float media = (nota1 + nota2 + nota3)/3;
        printf("Media aritmetica das notas: %.2f\n", media);
    }else if(tipoMedia == 'P'){
       float media = ((nota1 * 5)+(nota2 * 3)+(nota3 * 2))/3;
       printf("Media ponderada das notas: %.2f\n", media);
    }else{
        printf("Dados Invalidos. Voce deve digitar 'A' ou 'P'\n");
    }
}

int main(){
    int num;
    float nota01, nota02, nota03;
    char letraTipoMedia;
    printf("Existem quantos alunos?\n");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("Escreva a nota 01:\n");
        scanf("%f", &nota01);
        printf("Escreva a nota 02:\n");
        scanf("%f", &nota02);
        printf("Escreva a nota 03:\n");
        scanf("%f", &nota03);
        
        fflush(stdin);
        printf("Digite:\n 'A' para fazer a Media Aritmetica\n 'P' para fazer a Media Ponderada\n");
        scanf("%c", &letraTipoMedia);
        calculaMedias(nota01, nota02, nota03, letraTipoMedia);
    }
    return 0;
}