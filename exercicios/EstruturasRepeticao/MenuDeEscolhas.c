#include <stdio.h>

int main(){
    int menu, numMeses;
    float salario, novoSalario = 0, valorFerias, decimoTerceiro;
    
    do{
        printf("\n========MENU========\n");
        printf("1-Novo salario\n2-Ferias\n3-Decimo Terceiro\n4-Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("Qual o seu salario?\n");
                scanf("%f", &salario);

                if(salario > 2000){
                    novoSalario = (salario * 0.05) + salario;
                    printf("Voce tem direito a um aumento de 5%% no seu salario, totalizando: R$%.2f\n", novoSalario);
                }
                else if(salario <= 2000 && salario >= 1000){
                    novoSalario = (salario * 0.1) + salario;
                    printf("Voce tem direito a um aumento de 10%% no seu salario, totalizando: R$%.2f\n", novoSalario);
                }
                else{
                    novoSalario = (salario * 0.15) + salario;
                    printf("Voce tem direito a um aumento de 15%% no seu salario, totalizando: R$%.2f\n", novoSalario);
                }
            break;
            case 2:
                printf("O valor das suas ferias equivale ao acrescimdo do seu salario mais 1/3.\n");
                    valorFerias = (novoSalario / 3) + novoSalario;
                    printf("Sua ferias como o seu novo salario eh R$%.2f\n", valorFerias);
            break;

            case 3:
                do{
                    printf("Quantos meses voce esta na empresa esse ano? (Digite o mes em numeros)\n");
                    scanf("%d", &numMeses);
                    if(numMeses >= 1 && numMeses <= 12){
                            decimoTerceiro = (novoSalario * numMeses)/12;
                            printf("O valor do decimo terceiro com o novo salario eh: R$%.2f\n", decimoTerceiro);
                    }
                    else{
                        printf("Valor invalido! Escreva novamente\n");
                    }
                }while(numMeses < 1 || numMeses > 12);
            break;

            case 4:
                printf("========Fim do Programa========");
            break; 
        }
    }while(menu != 4);
    
    return 0;
}