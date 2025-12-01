#include <stdio.h>

int main(){
    int qtdVeiculos;
    float valorAluguel, alugadosMes, faturamentoAnual, multasMes, multasAnual, manutencaoAnual;

    FILE *arquivo;

    printf("Quantidade de veiculos: ");
    scanf("%d", &qtdVeiculos);
    printf("Valor do aluguel: ");
    scanf("%f", &valorAluguel);

    
    alugadosMes = qtdVeiculos / 3.0;
    faturamentoAnual = alugadosMes * valorAluguel * 12;

   
    multasMes = (alugadosMes * 0.10) * (valorAluguel * 0.20);
    multasAnual = multasMes * 12;

   
    manutencaoAnual = (qtdVeiculos * 0.02) * 600.0;

    
    printf("Faturamento Anual: R$ %.2f\n", faturamentoAnual);
    printf("Faturamento com Multas (Anual): R$ %.2f\n", multasAnual);
    printf("Gasto Anual com Manutencao: R$ %.2f\n", manutencaoAnual);

  
    arquivo = fopen("resultado.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao gravar arquivo.\n");
        return 1;
    }
    
    fprintf(arquivo, "%.2f\n", faturamentoAnual);
    fprintf(arquivo, "%.2f\n", multasAnual);
    fprintf(arquivo, "%.2f\n", manutencaoAnual);

    fclose(arquivo);
    return 0;
}