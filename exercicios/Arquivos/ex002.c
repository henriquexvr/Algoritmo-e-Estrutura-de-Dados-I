#include <stdio.h>

int main(){
   FILE *arq = fopen("arquivo4.txt", "r");

   char letra;

   if(arq == NULL){
        printf("Erro ao abrir o arquivo");
   }
   printf("Arquivo aberto\n");

   while((letra = fgetc(arq)) != EOF){
        printf("%c", letra);
   }

   fclose(arq);

   printf("\nArquivo fechado\n");
   return 0;
}