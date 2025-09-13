#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
    //Inicializa o gerador de numeros
    srand((unsigned) time(NULL));
    //Sorteia número entre 40 e 149
    printf("%d\n",(rand()%(150-40)));
    return 0;
}