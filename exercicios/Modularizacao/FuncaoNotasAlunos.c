/*Fa¸ca uma fun¸c˜ao que lˆe um n´umero indeterminado de notas de alunos, calcula e retorna
a m´edia das notas dos alunos aprovados (nota maior ou igual a 6). Fa¸ca um programa que lˆe o n´umero
de alunos e imprime a m´edia retornada pela fun¸c˜ao.*/
#include <stdio.h>

float calculoMediaNotas(int numeroAlunos){
    int contadorAlunos = numeroAlunos;
    float notaAluno, mediaNotas, totalNotas = 0.0;
    for(int i = 0; i < numeroAlunos; i++){
        do{
            printf("NOTA ALUNO %d:\n", i+1);
            scanf("%f", &notaAluno);
            if(notaAluno >= 6.0 && ( notaAluno <= 10.0)){
                totalNotas = totalNotas + notaAluno;
            }else if(notaAluno < 6.0 && notaAluno >= 0.0){
                contadorAlunos--;
            }
            else{
                printf("Valor invalido! Escreva novamente\n");
            }
        }while(notaAluno < 0.0 || notaAluno > 10.0);
    }
        mediaNotas = totalNotas / (float)contadorAlunos;
    return mediaNotas;
}

int main(){
    int numAlunos;
    float mediaNotas;
    
    printf("Escreva o numero de alunos:\n");
    scanf("%d", &numAlunos);
    mediaNotas = calculoMediaNotas(numAlunos);
    
    printf("MEDIA DAS NOTAS DOS ALUNOS APROVADOS = %.2f", mediaNotas);
}
