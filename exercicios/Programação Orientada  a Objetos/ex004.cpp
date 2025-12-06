#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        string nome;
        string especie;
        int idade;
        float valor;
    public:
        Animal(){
            nome = "";
            especie = "";
            idade = 0;
            valor = 0.0;
        }
        
        Animal(string n, string e, int i, float v){
            nome = n;
            especie = e;
            idade = i;
            valor = v;
        }

        void setNome(string n){
            nome = n;
        }

        string getNome(){
            return nome;
        }

        void setEspecie(string r){
            especie = r;
        }

        string getEspecie(){
            return especie;
        }

        void setIdade(int i){
            idade = i;
        }

        int getIdade(){
            return idade;
        }

        void setValor(float v){
            valor = v;
        }

        float getValor(){
            return valor;
        }
};

class Loja{
    private:
        Animal listaAnimais[100];
        int quantidadeAnimais;
    public:
        Loja(){
            quantidadeAnimais = 0;
        }
        void setQuantidadeAnimais(int qtd){
            quantidadeAnimais = qtd;
        }
        
        int getQuantidadeAnimais(){
            return quantidadeAnimais;
        }

        void venderAnimal(int posicao){
            for(int i = posicao; i < quantidadeAnimais; i++){
                listaAnimais[i] = listaAnimais[i+1];
            }
            quantidadeAnimais--;
        }
        
        void adicionarAnimal(Animal a){
            listaAnimais[quantidadeAnimais] = a;
            quantidadeAnimais++;
        }   
        
        void animalInfo(int i){
            cout << "Nome:" << listaAnimais[i].getNome() << endl;
            cout << "Especie:" << listaAnimais[i].getEspecie() << endl;
            cout << "Idade:" << listaAnimais[i].getIdade() << endl;
            cout << "Valor: R$" << listaAnimais[i].getValor() << endl;
        }
        
        void updateInfo(int posicao, Animal a){
            listaAnimais[posicao] = a;
        }
};


int main(){
    Loja lojaAnimais;
    
    int quantidade, idade, animalVendido, updateAnimal;
    string nome, especie, escolha;
    float valor;

    cout << "Numero de animais na loja:" << endl;
    cin >> quantidade;

    Animal animais[quantidade];

    for(int i = 0; i < quantidade; i++){
        cout << "---- Animal " << i+1 << " ----" << endl;
        cout << "Escreva o nome:" << endl;
        cin >> nome;
        
        cout << "Escreva a especie (Gato/Cachorro):" << endl;
        cin >> especie;

        cout << "Escreva a idade:" << endl;
        cin >> idade;

        cout << "Escreva o valor:" << endl;
        cin >> valor;

        animais[i] = Animal(nome, especie, idade, valor);
        lojaAnimais.adicionarAnimal(animais[i]);
    }
    cout << "Lista de animais da loja:" << endl;
    for(int i = 0; i < quantidade; i++){
        cout << "---- Animal " << i+1 << " ----"<<endl;
        lojaAnimais.animalInfo(i);
    }
     
    cout << "Deseja adicionar algum animal (S/N)" << endl;
    cin >> escolha;
    if(escolha == "S"){
        cout << "Digite o numero do animal que deseja atualizar:" << endl;
        cin >> updateAnimal;
        
        cout << "---- Animal " << updateAnimal << " ----" << endl;
        cout << "Escreva o nome:" << endl;
        cin >> nome;
        
        cout << "Escreva a especie (Gato/Cachorro):" << endl;
        cin >> especie;

        cout << "Escreva a idade:" << endl;
        cin >> idade;

        cout << "Escreva o valor:" << endl;
        cin >> valor;

        animais[updateAnimal-1] = Animal(nome, especie, idade, valor);
        lojaAnimais.updateInfo(updateAnimal-1, animais[updateAnimal-1]);
    }
    
    do{
    cout << "Qual o numero do animal vendido" << endl;
    cin >> animalVendido;
    lojaAnimais.venderAnimal(animalVendido -1);
    cout << "Deseja vender outro animal?(S/N)" << endl;
    cin >> escolha;
    }while(escolha != "N");
    
    cout << "Lista de animais da loja:" << endl;
    for(int i = 0; i < lojaAnimais.getQuantidadeAnimais(); i++){
        cout << "---- Animal " << i+1 << " ----"<<endl;
        lojaAnimais.animalInfo(i);
    }
    return 0;
}
