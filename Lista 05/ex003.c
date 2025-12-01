#include <stdio.h>

int main(){
    FILE * arquivo;
    arquivo = fopen("arquivo2","w");
     if(arquivo == NULL){
        printf("Erro ao criar o arquivo");
        return -1;
     }

     int num, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\n");

   
    fprintf(arquivo, "%d", soma);
    fclose(arquivo);
     

    return 0;
}