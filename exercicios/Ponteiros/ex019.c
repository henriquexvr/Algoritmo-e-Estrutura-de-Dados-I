#include <stdio.h>

#define PI 3.1415 

void calcCircunferencia (float R, float *compr, float *area){
    *compr = 2 * PI * R; //O valor apontado por compr recebe o resultado de 2 * PI * R
    *area = PI * (R * R); //O valor apontado por area recebe o  resultado de PI * (R * R)
}

int main(){
    float raio, comprimento, area;
    printf("Qual o raio da sua circuferencia? ");
    scanf("%f", &raio);

    calcCircunferencia(raio, &comprimento, &area);

    printf("Comprimento da circuferencia é %.2f\n", comprimento);
    printf("A area da circuferencia é %.2f\n", area);
    return 0;
}