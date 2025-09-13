#include <stdio.h>

int main(void)
{
    int escolha;
    float num1, num2, res;
    do
    {
        printf("Digite um numero:\n");
        scanf("%f", &num1);

        printf("Digite um numero:\n");
        scanf("%f", &num2);

        printf("Escolha uma das opcoes:\n");
        printf("\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("Adicao\n");
            res = num1 + num2;
            printf("Resultado da operacao e: %.2f\n", res);
        }
        else if (escolha == 2)
        {
            printf("Subtracao\n");
            res = num1 - num2;
            printf("Resultado da operacao e: %.2f\n", res);
        }
        else if (escolha == 3)
        {
            printf("Multiplicacao\n");
            res = num1 * num2;
            printf("Resultado da operacao e: %.2f\n", res);
        }
        else if (escolha == 4)
        {
            printf("Divisao\n");
            if(num2 != 0){
                res = num1 / num2;
            }
            else{
                res = 0.0;
            }
            printf("Resultado da operacao e: %.2f\n", res);
        }
        else if (escolha == 5)
        {
        }
        else
        {
            printf("Escolha errada.");
            escolha = 1;
        }
    } while (escolha >= 1 && escolha <= 4);

    printf("\nFim do Programa.");
}