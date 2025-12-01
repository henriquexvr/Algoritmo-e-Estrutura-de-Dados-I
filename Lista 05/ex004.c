#include <stdio.h>

int main() {
    int n, vogais = 0;
    char letra;
    FILE *arquivo;

    
    arquivo = fopen("letras.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    printf("Quantas letras deseja inserir? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite a letra %d: ", i + 1);
        scanf(" %c", &letra); 
        fputc(letra, arquivo);
        fputc('\n', arquivo);
    }
    fclose(arquivo);

    arquivo = fopen("letras.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler arquivouivo!\n");
        return 1;
    }

    
    while ((letra = fgetc(arquivo)) != EOF) {
        
        
        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' ||letra == 'o' || letra == 'O' ||letra == 'u' || letra == 'U') {
            vogais++;
        }
    }
    fclose(arquivo);

    printf("Quantidade total de vogais no arquivo: %d\n", vogais);
    return 0;
}