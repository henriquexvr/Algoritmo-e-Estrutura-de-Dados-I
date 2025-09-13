#include <stdio.h>

int main (void){
    double var1;
    int var2;

    var1 = 7.76835;
    var2 = 45;

    printf("Variavel 1 = %lf\nVariavel 2 = %i\n", var1, var2);

    printf("======Exibicao do valor inteiro======\n");
    printf("Variavel 1 = %lf\n", (int) var1);

    printf("======Exibicao do caractere equivalente======\n");
    printf("Variavel 2 = %c\n", (char) var2);
return 0;
}