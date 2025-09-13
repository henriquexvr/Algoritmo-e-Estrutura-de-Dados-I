/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o salário familiar e quantidade de membros (pais + filhos). Escreva um procedimento que leia
esses dados para um número não determinado de famílias (ler até que salário igual 0), calcule e
exiba a média de salário da população. Faça um programa main que acione o procedimento.*/

#include <stdio.h>
void leituraDeDados(){
    int numPessoas, populacao = 0, numFamilias;
    float salarioMembros, salarioFamiliar = 0.0, salarioPopulacao = 0.0, mediaSalarioPopulacao;

    printf("Voce quer coletar os dados de quantas familias?\n");
    scanf("%d", &numFamilias);

    for(int i = 0; i < numFamilias; i++){
        printf("Escreva quantas pessoas tem na sua familia:\n");
        scanf("%d", &numPessoas);
        for(int j = 0; j < numPessoas; j++){
            do{
                printf("Escreva o salario do membro %d: ", j+1);
                scanf("%f", &salarioMembros);
                if(salarioMembros < 0){
                    printf("Valor invalido!\nEscreva novamente.\n");
                }
            }while(salarioMembros < 0);
            salarioFamiliar += salarioMembros;
        }  
        populacao += numPessoas;
        salarioPopulacao += salarioFamiliar;
    }
    mediaSalarioPopulacao = salarioFamiliar / (float)populacao;
    printf("O salario medio da populacao eh: R$%.2f", mediaSalarioPopulacao);
}

int main(){

        leituraDeDados();
    return 0;
}