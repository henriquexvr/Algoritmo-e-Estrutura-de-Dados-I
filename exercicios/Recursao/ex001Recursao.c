#include <stdio.h>

void mostrar(int i){
    if(i < 4){
        printf("%d\n", i);
        mostrar(i + 1);
    }else{
        printf("SAIU DA RECURSSÃO!!!!");
    }
    
}

int main(){
    mostrar(0);
    return 0;
}