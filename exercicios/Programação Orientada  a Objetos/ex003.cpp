#include <iostream>
#include <string>

using namespace std;

class ContaCorrente{
    private:
        float dinheiro;
    public:
        ContaCorrente(){
            dinheiro = 0.0;
        }

        float getDinheiro(){
            return dinheiro;
        }

        void setDinheiro(float x){
            dinheiro = x;
        }

        void depositarDinheiro(float valor){
            dinheiro = dinheiro + valor;
        }

        void sacarDinheiro(float valor){
            float taxa = valor * 0.005;
            if(dinheiro <= 0.0){
                cout << "Voce nao possui saque disponivel, veja o saldo da sua conta" << endl;
                return;
            }else if(valor > dinheiro){
                cout << "Verifique o valor disponivel na sua conta" << endl;
                return;
            }else{
                dinheiro = dinheiro - ( valor + taxa);
            }
            cout << "Valor sacado: R$" << valor << endl;
        }

        void verSaldo(){
            cout << "Saldo: R$" << dinheiro << endl;
        }
};

class ContaCorrenteEspecial: public ContaCorrente {
        public:
        void sacarDinheiro(float valor){
            float saldoAtual, taxa = valor * 0.001;
            saldoAtual = getDinheiro();
            if(saldoAtual <= 0.0){
                cout << "Voce nao possui saque disponivel, veja o saldo da sua conta" << endl;
                return;
            }else if(valor > saldoAtual){
                cout << "Verifique o valor disponivel na sua conta" << endl;
                return;
            }else{
                saldoAtual = saldoAtual - ( valor + taxa);
                setDinheiro(saldoAtual);
            }
            cout << "Valor sacado: R$" << valor << endl;
        }
};

int main(){
    int escolha, tipoConta;
    ContaCorrente conta1;
    ContaCorrenteEspecial contaEspecial1;
    cout << "Sua conta é especial?" << endl;
    cout << "1- Sim" << endl << "2- Não" << endl;
    cin >> tipoConta;

do{
    cout << "O que voce deseja fazer?" << endl << "1 - Ver o Saldo" << endl << "2 - Depositar dinheiro" << endl << "3 - Sacar dinheiro" << endl << "4 - Sair" << endl;
    cin >> escolha;
        switch(escolha){
            case 1:
            if(tipoConta == 1){
                contaEspecial1.verSaldo();
            }else{
                conta1.verSaldo();
            }
            break;
            
            case 2:
            float depositar;
            cout << "Digite um valor para depositar: " << endl;
            cin >> depositar;
            if(tipoConta == 1){
                contaEspecial1.depositarDinheiro(depositar);
            }else{
                conta1.depositarDinheiro(depositar);
            }
            cout << "Verifique seu saldo " << endl;
            break;
            
            case 3:
            float sacar;
            cout << "Digite um valor que deseje sacar: " << endl;
            cin >> sacar;
            if(tipoConta == 1){
                contaEspecial1.sacarDinheiro(sacar);
            }else{
                conta1.sacarDinheiro(sacar);
            }
            
            break;
            case 4:
            cout << "Fim do programa!" << endl;
        }
    
    }while(escolha != 4);
    return 0;
}