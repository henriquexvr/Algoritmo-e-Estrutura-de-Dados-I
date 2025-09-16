#include <stdio.h>

float calculoMediaNotas(int numeroAlunos){
    float notaAluno, mediaNotas = 0.0;
    for(int i = 0; i < numeroAlunos; i++){
        printf("NOTA ALUNO %d", i);
        scanf("%f", &notaAluno);
        if((int)notaAluno > 6){
            mediaNotas = (mediaNotas + notaAluno) / (float)numeroAlunos; 
        }else{
            numeroAlunos--;
        }
    }
    return mediaNotas;
}

int main(){
    int numAlunos;
    float mediaNotas;
    
    printf("Escreva o numero de alunos:\n");
    scanf("%d", &numAlunos);
    calculoMediaNotas(numAlunos);

    printf("Media das notas = %.2f", calculoMediaNotas(mediaNotas));
}