#include <stdio.h>

int main(void){
    int n;
    printf("Escreva numeros inteiros: \n");
    scanf("%d", &n);
    //ENQUANTO i FOR MAIOR OU IGUAL A n INCREMENTE 1 NO i
    //ISSO VAI FAZER O VALOR CHEGAR ATE O NUMERO DIGITADO DEIXANDO A CONDIÇÃO DO FOR >>VERDADEIRA<<
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}