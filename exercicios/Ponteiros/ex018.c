/*
p++: incremento de 4 bytes no endereço do ponteiro
(*p)++: incremento de uma unidade no valor da variavel
*(p++): incremento de 4 bytes no endereço e acessa o valor desse novo endereço
*(p+10): incremento de 40 bytes do endereço e acesso ao valor desse novo endereço
*/

//p++:
#include <stdio.h>
int main(){
int *p;
printf("O valor eh: %p");
p++;
printf("O valor agora eh: %p");
return 0;
}

/* (*p)++:
#include <stdio.h>
int main(){
int x = 10;
int *p;
p = &x;
printf("O valor de x eh: %d");
printf("O valor do ponteiro eh : %p");
(*p)++;
printf("O valor de x agora eh: %d");
printf("O valor do ponteiro agora eh : %p");
return 0;
}
*/
/* *(p++):
#include <stdio.h>
int main(){
int x = 10;
int *p;
p = &x;
printf("O valor de x eh: %d");
printf("O valor do ponteiro eh : %p");
(*p)++;
x = *p;
printf("O valor de x agora eh: %d");
printf("O valor do ponteiro agora eh : %p");
return 0;
}
*/
