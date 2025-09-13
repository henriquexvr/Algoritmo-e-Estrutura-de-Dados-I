#include <stdio.h>

int main(void){
    int i=1;
    while(i<=1000){
    if(i<1000){
        printf("%d, ", i);   
    }
    else{
        printf("%d.", i);
    }
    i++;
}
    return 0;
}