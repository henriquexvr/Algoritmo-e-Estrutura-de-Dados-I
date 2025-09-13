#include <stdio.h>

int main() {
    float notaProva1, notaProva2, notaProva3, notaLab, notaFinal, presenca;

    printf("Escreva a nota da prova: \n-Prova 01\n-Prova 02\n-Prova 03\n-Nota Laboratorio\n");
    scanf("%f %f %f %f", &notaProva1, &notaProva2, &notaProva3, &notaLab);

    notaFinal = notaProva1 + notaProva2 + notaProva3 + notaLab;

    printf("Escreva a sua PRESENÇA final: \n");
    scanf("%f", &presenca);

    if (notaFinal >= 60 && presenca <= 25){
        printf ("APROVADO");
    }
    else {
    printf("REPROVADO");
    }
}