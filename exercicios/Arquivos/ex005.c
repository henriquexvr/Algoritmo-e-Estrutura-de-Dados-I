#include <stdio.h>


int main(){
    int valor1, valor2;

    FILE *arq = fopen("arquivo5.txt", "w");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
    }
    printf("Arquivo aberto corretamente\n");

    printf("Escreva dois numeros inteiros:\n");
    scanf("%d %d", &valor1, &valor2);

    fprintf(arq, "%d %d", valor1, valor2);
    fclose(arq);
    printf("\nArquivo fechado\n");
    return 0;
}



