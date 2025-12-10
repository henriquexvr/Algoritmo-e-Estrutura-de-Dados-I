#include <iostream>

#include <string>
using namespace std;

class Veiculo{
    private:
        int peso;
        int velMax;
        float valor;
    public:
        Veiculo(){
            peso = 0;
            velMax = 0;
            valor = 0.0;
        }
        Veiculo(int p, int vel, float v){
            peso = p;
            velMax = vel;
            valor = v;
        }
        int getPeso(){
            return peso;
        }
        void setPeso(int p){
            peso = p;
        }

        int getVelMax(){
            return velMax;
        }
        void setVElMax(int vel){
            velMax = vel;
        }

        float getValor(){
            return valor;
        }
        void setValor(int v){
            valor = v;
        }
        
        void print(){
            printf("Algum valor");
        }
};


class Motor{
    private:
        int numCilindros;
        int potencia;
    public:
        Motor(){
            numCilindros = 0;
            potencia = 0;
        }
        Motor(int c, int p){
            numCilindros = c;
            potencia = p;
        }
};

int main(){


    return 0;
}