#include <iostream>
#include <string>

using namespace std;

class Loja{
    private:    
        string nome;
        string telefone;
    public: 
        Loja(){
            nome = "";
            telefone = "";
        }
        void setNome(string nome){
            this->nome = nome;
        }
        string getNome(){
            return this->nome;
        }

        void setTelefone(string telefone){
            this->telefone = telefone;
        }

        string getTelefone(){
            return this->telefone;
        }

        void mostrarDados(){
            cout << "Loja: " << nome << "| Tel: " << telefone << endl;
        }
    };        

class Alimentos{
    private:    
        string alimento;
        float preco;
    public: 
        Alimentos(){
            alimento = "";
            preco = 0.0;
        }
        void setAlimento(string alimento){
            this->alimento = alimento;
        }

        string getAlimento(){
            return this->alimento;
        }
        void setPreco(float preco){
            if(preco == 0){
               cout << "O preco tem que ser maior do que zero.";
               return;
             }
            this->preco = preco;
        }

        float getPreco(){
            return this->preco;
        }
};


int main(){
    Loja dadosLoja;
    Alimentos *precoAlimentos = new Alimentos[10];
    string nome, telefone, alimento, alimentoMenorValor, alimentoMaiorValor;
    float preco, precoTotal = 0, menorValor, maiorValor;


    cout << "Digite o nome da loja: ";
    getline(cin, nome);
    cout << "Digite o numero de telefone da loja: ";
    getline(cin, telefone);

    dadosLoja.setNome(nome);
    dadosLoja.setTelefone(telefone);

    menorValor = precoAlimentos[0].getPreco();
    maiorValor = precoAlimentos[0].getPreco();

    for(int i = 0; i < 10; i++){
        cout << "Produto " << i+1 << endl;
        cout << "Digite o nome do alimento: ";
        getline(cin, alimento);
        cout << "Digite o preco: ";
        cin >> preco;
        cin.ignore();

        precoAlimentos[i].setAlimento(alimento);
        precoAlimentos[i].setPreco(preco);

        precoTotal = precoTotal + precoAlimentos[i].getPreco();
        if(menorValor == 0){
            menorValor = precoAlimentos[0].getPreco();
        }
        
        if(menorValor > precoAlimentos[i].getPreco()){
            menorValor = precoAlimentos[i].getPreco();
            alimentoMenorValor = precoAlimentos[i].getAlimento();
        }
        if(maiorValor < precoAlimentos[i].getPreco()){
            maiorValor = precoAlimentos[i].getPreco();
            alimentoMaiorValor = precoAlimentos[i].getAlimento();
        }
    }
    cout << "-------------------------------------------" << endl;
    cout << "Valores dos alimentos: " << endl;
    dadosLoja.mostrarDados();
    
    cout << "Menor preco: " << alimentoMenorValor <<" R$" << menorValor << endl;
    cout << "Media de preco: R$"<< precoTotal/10 << endl;
    cout << "Maior valor: " << alimentoMaiorValor <<" R$"<< maiorValor << endl;

    return 0;
}