#include <iostream>
#include <string>

using namespace std;

class Autor{
    private:
        string nome;
        int anoNascimento;
    public:
        //Construtor
        Autor(string nome, int anoNascimento){
            this->nome = nome;
            if(anoNascimento >= 2025){
                cout << "Idade invalida!" << endl;
                return;    
            }
            cout << "Idade valida!" << endl;
            this->anoNascimento = anoNascimento;
        }
        Autor(){

        }
        //Metodos Get e Set
        void setNome(string nome){
            this->nome = nome;
        }

        string getNome(){
            return nome;
        }
        
        void setAnoNascimento(int anoNascimento){
            if(anoNascimento >= 2025){
                cout << "Idade invalida!" << endl;    
            }else{
                cout << "Idade valida!" << endl;
                this->anoNascimento = anoNascimento;
            }
            
        }

        int getAnoNascimento(){
            return this->anoNascimento;
        }
        
        //Metodo Exibir info
        void exibirInfo(){
            cout << "Autor: " << nome << " (" << anoNascimento <<")" << endl;
        }
};

class Livro{
    private:
        string titulo;
        int anoPublicacao;
        Autor autor;
    public:
        Livro(string titulo, int anoPublicacao, Autor autor){
            this->titulo = titulo;
            this->anoPublicacao = anoPublicacao;
            this->autor = autor;
        }

        void setTitulo(string titulo){
            this->titulo = titulo;
        }
        string getTitulo(){
            return this->titulo;
        }

        void setAnoPublicacao(int anoPublicacao){
            this->anoPublicacao = anoPublicacao;
        }

        bool ehClassico(){
            if(2025 - anoPublicacao >= 50){
                return true;
            }
            return false;
        }

        void exibirInfo(){
            if(ehClassico()== true){
                cout << "Um classico da literatura!" << endl;
            }
            cout << "Titulo: " << titulo << " publicado em " << anoPublicacao << "" << endl;
            autor.exibirInfo();
        }
};

int main(){
    Autor autor1("Maria", 1990);
    
    Autor autor2("Henrique Xavier", 1967);
    
    string nomeAutor, tituloLivro;
    int anoNascimentoAutor, anoLivro;
    
    Livro livro1("Um livro muito chato", 1990, autor1);
    livro1.exibirInfo();
    Livro livro2("Um livro muito legal", 1999, autor2);
    livro2.exibirInfo();
    Livro livro3("Um livro mediano", 1989, autor2);
    livro3.exibirInfo();

    cout << "Escreva o nome do autor: ";
    getline(cin, nomeAutor); //Função getline possibilita a leitura de strings com espaços em brancos
    cout << "Escreva o ano que o autor nasceu: ";
    cin >> anoNascimentoAutor;
    cin.ignore(); //Limpa o o enter do buffer

    Autor autor3(nomeAutor, anoNascimentoAutor);

    cout << "Escreva o titulo do livro: ";
    getline(cin, tituloLivro); //Função getline possibilita a leitura de strings com espaços em brancos
    cout << "Escreva o ano que o livro foi publicado: ";
    cin >> anoLivro;

    Livro livro4(tituloLivro, anoLivro, autor3);
    livro4.exibirInfo();

    return 0;
}