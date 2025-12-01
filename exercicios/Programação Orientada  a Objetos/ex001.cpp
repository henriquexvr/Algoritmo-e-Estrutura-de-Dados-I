#include <iostream>
#include <string>

using namespace std;

class CadastroCliente{
    private:
        string nome;
        string dataNascimento;
        string endereco;
        string telefone;
    public:
    //Cosntrutor vazio para criar espaços vazios a serem preenchidos
        CadastroCliente(){
            this->nome = "";
            this->dataNascimento = "";
            this->endereco = "";
            this->telefone = "";
        }

        CadastroCliente(string nome, string dataNascimento, string endereco, string telefone){
            this->nome = nome;
            this->dataNascimento = dataNascimento;
            this->endereco = endereco;
            this->telefone = telefone;
        }
        
        void exibirClientes(){
            cout << "Nome: " << nome << endl;
            cout << "Data: " << dataNascimento << endl;
            cout << "Endereco: " << endereco << endl;
            cout << "Telefone: " << telefone << endl;
        }
};

int main(){
    int quantidade;
    string nome, data, endereco, telefone;
    cout << "Digite a quantidade de clientes: ";
    cin >> quantidade;
    cin.ignore(); //Limpa o buffer por causa do ENTER

    CadastroCliente *cliente = new CadastroCliente[quantidade];

    for(int i = 0; i < quantidade; i++){
        cout << "Cliente " << i+1 << ":" << endl;
        cout << "Digite seu nome: ";
        getline(cin, nome);
        cout << "Digite sua data de nascimento (DD/MM/AAAA): ";
        getline(cin, data);
        cout << "Digite seu endereco: ";
        getline(cin, endereco);
        cout << "Digite seu telefone: ";
        getline(cin, telefone);


        cliente[i] = CadastroCliente(nome, data, endereco, telefone);
    }
    int escolha;
    cout << "Deseja ver os dados dos clientes?" << endl << "1. Sim" << endl << "2. Não" << endl;
    cin >> escolha;

    switch(escolha){
        case 1:
            for(int i = 0; i < quantidade; i++){
            cout << "Cliente " << i+1 << ":" << endl;
            cliente[i].exibirClientes();
        }
        break;
        default:
            cout << "Fim do programa";
    }
    return 0;
}
    
    
