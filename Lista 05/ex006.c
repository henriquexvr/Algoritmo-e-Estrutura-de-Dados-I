#include <stdio.h>

int main() {
    FILE *arq;
    arq = fopen("floats.txt", "r");
    if (arq == NULL) {
        printf("Erro: Crie um arquivo 'floats.txt' com numeros dentro antes de rodar!\n");
        return 1;
    }

    float num, max, min, soma = 0;
    int count = 0;

    if (fscanf(arq, "%f", &num) == 1) {
        max = num;
        min = num;
        soma += num;
        count++;
    }


    while (fscanf(arq, "%f", &num) == 1) {
        if (num > max) max = num;
        if (num < min) min = num;
        soma += num;
        count++;
    }
    fclose(arq);

    if (count > 0) {
        printf("Maximo: %.2f\n", max);
        printf("Minimo: %.2f\n", min);
        printf("Media: %.2f\n", soma / count);
    } else {
        printf("O arquivo estava vazio.\n");
    }

    return 0;
}