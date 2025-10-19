#include <stdio.h>


int gravidadePlaneta(){
    int escolhaPlaneta;
    printf("Digite um numero inteiro para fazer a escolha:\n");
    printf("1. Marte\n2. Jupiter\n3. Saturno\n");
    
    scanf("%d", &escolhaPlaneta);
    switch(escolhaPlaneta){

            case 1:
            printf("Marte:\n Recomendado a alterar a gravidade para: 3.73m/s\n");
            break;
            case 2:
            printf("Saturno:\n Recomendado a alterar a gravidade para: 10.44m/s\n");
            break;
            case 3:
            printf("Jupiter:\n Recomendado a alterar a gravidade para: 24.79m/s\n");
            break;
        }
    return escolhaPlaneta;
    }

float calcularAngulo(){
    float anguloTrajetoria = 0;
    int distancia;
    printf("Escreva a distancia que voce quer viajar:\n");
    scanf("%d", &distancia);

    anguloTrajetoria = distancia * 0.42 + 18;

    printf("O angulo de trajetorioa eh: %.2f\n", anguloTrajetoria);
    return anguloTrajetoria;
}

int simularQueima(){
    int combustivel = 1000;
    //Cada interação com o combustivel reduz 50 unidades
    printf("NIVEL DE COMBUSTIVEL = 1000L\n");
    combustivel = combustivel - 50;
    if(combustivel == 500){
        printf("O NIVEL DE COMBUSTIVEL CHEGOU A: 500L");
    }else if(combustivel == 100){
        printf("O NIVEL DE COMBUSTIVEL CHEGOU A: 100L ");
    }
return combustivel;
}

float registrarMissao(){
    float registroMissoes[40];
    int numeroMissao = 0;
    int indice = 0;

    if (numeroMissao >= 10) {
        printf("Limite de missoes atingido!\n");
        return;
    }
    printf("Escreva  a distancia da missao: ");
    scanf("%f", &registroMissoes[0 + indice]);

    printf("Escreva  o angulo da trajetoria: ");
    scanf("%f", &registroMissoes[1 + indice]);
    

    printf("Escreva o numero do planeta:\n1. Marte\n2. Jupiter\n3. Saturno");
    scanf("%f", &registroMissoes[2 + indice]);
    

    printf("Escreva o status final da missao:\n1 = Sucesso\n0 = Fracassou");
    scanf("%f", &registroMissoes[3 + indice]);
     
    
    printf("Missão %d registrada com sucesso!", numeroMissao);
    numeroMissao++;
    indice = indice + 4;
    
    return registroMissoes, 40;
}

void historicoMissoes(){
    float registroMissoes[40];
    int numeroMissoes;
    int multiplicador = 4, indice;
    for(int i = 0; i <= numeroMissoes; i++){
        indice = i * multiplicador;
        printf("Missao %d:", i+ 1);
        printf("Distancia da missão: %.2f", registroMissoes[indice]);
        printf("Angulo trajetoria: %.2f", registroMissoes[indice + 1]);
        printf("Planeta: %d", registroMissoes[indice + 2]);
        printf("Status missão %d", registroMissoes[indice + 3]);
    }
}
int menu(){
    int escolhaOpcao;
    do{
        printf("==== SISTEMA DE CONTROLE DE MISSOES ESPACIAIS ====\n");
        printf("Digite um numero inteiro para fazer a escolha:\n");
        printf("1. Simular Queima de Combustivel\n2. Calcular Angulo de Trajetoria\n3. Calcular Gravidade em Planeta\n4. Registrar Missao\n5. Ver Historico de Missoes\n6. Sair\n");
        
        scanf("%d", &escolhaOpcao);
        switch(escolhaOpcao){
            case 1:
            simularQueima();
            break;
            case 2:
            calcularAngulo();
            break;
            case 3:
            gravidadePlaneta();
            break;
            case 4:
            registrarMissao();
            break;
            case 5:
            historicoMissoes();
            break;
            case 6:
            printf("Finalizando o sistema.\n");
            break;
            default:
            printf("Opcao invalida.!\n");
    }
    }while(escolhaOpcao != 6);
    
    return 0;
}

int main(){
    int senha = 2025, tentativas = 0;
    do{
        printf("Escreva a senha:\n");
        scanf("%d", &senha);
        
        if(tentativas >= 3){
            printf("Numero de tentativas esgotado!");
            return 0;
        }
        tentativas++;
    }while(senha != 2025);
    menu();
    
    return 0;
}