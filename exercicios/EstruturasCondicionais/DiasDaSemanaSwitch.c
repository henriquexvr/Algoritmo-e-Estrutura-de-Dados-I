#include <stdio.h>

int main(void){
    int diaDaSemana;
    
    printf("1-Domingo\n2-Segunda\n3-Terca\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabado\n");
    printf("Escreva qual o dia da semana de hoje:\n");
    scanf("%d", &diaDaSemana);
    
    

    switch(diaDaSemana){
        case 1:
            printf("Não e domingo");
            break;
        case 2:
            printf("Não e segunda");
            break;
        case 3:
            printf("Não e terca");
            break;
        case 4:
            printf("EH QUARTA");//O CODIGO FOI ESCRITO EM UMA QUARTA FEIRA
            break;
        case 5:
            printf("Não e quinta");
            break;
        case 6:
            printf("Não e sexta");
            break;
        case 7:
            printf("Não e sabado");
            break;
        default:
            printf("A semana so tem 7 dias imbecil");

    }
    return 0;
}