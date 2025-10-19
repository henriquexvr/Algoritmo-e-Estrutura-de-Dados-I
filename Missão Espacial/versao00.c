#include <stdio.h>

int gravidadePlaneta(){
    int escolhaPlaneta;
    printf("Digite um numero inteiro para fazer a escolha:\n");
    printf("1. Marte\n2. Jupiter\n3. Saturno\n");
    
    scanf("%d", &escolhaPlaneta);
    switch(escolhaPlaneta){

            case 1:
            printf("Marte\n Recomendado a alterar a gravidade para: 3.73m/s\n");
            break;
            case 2:
            printf("Saturno\n Recomendado a alterar a gravidade para: 10.44m/s\n");
            break;
            case 3:
            printf("Jupiter\n Recomendado a alterar a gravidade para: 24.79m/s\n");
            break;
        }
    return escolhaPlaneta;
    }
int perguntarDistancia(){
    int distancia;
    printf("Escreva a distancia que voce quer viajar:\n");
    scanf("%d", &distancia);
    printf("A distancia eh: %d\n", distancia);
    return distancia;
}
float calcularAngulo(){
    float anguloTrajetoria = 0;
    int distancia = perguntarDistancia();
    
    anguloTrajetoria = distancia * 0.42 + 18;

    printf("O angulo de trajetorioa eh: %.2f\n", anguloTrajetoria);
    return 0;
}

int simularQueima(int combustivel){
    //Cada interação com o combustivel reduz 50 unidades
    if(combustivel >= 50){
            combustivel = combustivel - 50;
        printf("%d\n", combustivel);
        if(combustivel > 500){
            printf("NIVEL DE COMBUSTIVEL = 1000L\n");
        }
        else if(combustivel == 500){
            printf("O NIVEL DE COMBUSTIVEL CHEGOU A: 500L\n");
        }else if(combustivel == 100){
            printf("ATENÇÃO: O NIVEL DE COMBUSTIVEL CHEGOU A: 100L\n");
        }else if(combustivel == 0){
            printf("ATENÇÃO: O NIVEL DE COMBUSTIVEL CHEGOU A: 0L\n");
        }
    }else{
        printf("AVISO: COMBUSTIVEL INSUFICIENTE PARA QUEIMA");
    }
    
    return combustivel;

}
float registrarMissao(float registroMissoes[], int *numMissoes){
    
    if (*numMissoes >= 10) {
        printf("Limite de missoes atingido!\n");
        return;
    }

    int indice = (*numMissoes * 4);
    
    printf("========REGISTRAR MISSAO %d========\n", (*numMissoes) + 1);

    printf("Escreva  a distancia:\n");
    scanf("%f", &registroMissoes[0 + indice]);

    printf("Escreva  o angulo da trajetoria:\n");
    scanf("%f", &registroMissoes[1 + indice]);

    printf("Escreva o numero do planeta:\n1. Marte\n2. Jupiter\n3. Saturno\n");
    scanf("%f", &registroMissoes[2 + indice]);
    

    printf("Escreva o status final da missao:\n1 = Sucesso\n0 = Fracassou\n");
    scanf("%f", &registroMissoes[3 + indice]);
     
    
    printf("Missao %d registrada com sucesso!\n", (*numMissoes)+1);
    (*numMissoes)++;

    return 0;
}

float historicoMissoes(float registroMissoes[], int numeroMissoes){
    printf("%d\n", numeroMissoes);
    for(int i = 0; i < numeroMissoes; i++){
        int indice = i * 4;
        
        int distancia = registroMissoes[indice];
        int angulo = registroMissoes[indice + 1];
        int planeta = registroMissoes[indice + 2];
        int status = registroMissoes[indice + 3];

        printf("====MISSAO %d:====\n", i+ 1);
        printf("Distancia da missao: %d\n", distancia);
        printf("Angulo trajetoria: %d\n", angulo);
        printf("Planeta: %d\n", planeta);
        printf("Status missao: %d\n", status);
    }
return 0; 
}

int menu(){
    int escolhaOpcao;
    //Variaveis globais
    int combustivel = 1000, numeroDeMissoes = 0;
    float registroMissoes[40];
    do{
        printf("==== SISTEMA DE CONTROLE DE MISSOES ESPACIAIS ====\n");
        printf("Digite um numero inteiro para fazer a escolha:\n");
        printf("1. Simular Queima de Combustivel\n2. Calcular Angulo de Trajetoria\n3. Calcular Gravidade em Planeta\n4. Registrar Missao\n5. Ver Historico de Missoes\n6. Sair\n");
        
        scanf("%d", &escolhaOpcao);
        switch(escolhaOpcao){
            case 1:
            combustivel = simularQueima(combustivel);
            break;
            case 2:
            calcularAngulo();
            break;
            case 3:
            gravidadePlaneta();
            break;
            case 4:
            registrarMissao(registroMissoes, &numeroDeMissoes);
            break;
            case 5:
            historicoMissoes(registroMissoes, numeroDeMissoes);
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
        tentativas++;
        printf("Escreva a senha:\n");
        scanf("%d", &senha);
        
        if(tentativas >= 3){
            printf("Numero de tentativas esgotado!");
            return 0;
        }
        
    }while(senha != 2025);
    menu();
    
    return 0;
}