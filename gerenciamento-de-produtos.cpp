#include <iostream>
#include <cstdlib> // Bibliotéca para usar o comando system()

using namespace std;

//Variavel para sair do sistema
int sairDoSistema;

//Variaveis para adicionar um produto
string nomeProduto[10] = {""};
int codigoProduto[10] = {0};
float precoProduto[10] = {0.0};

//Variavel contém a escolha de qual funcionalidade o usuário quer usar
int escolhaUsuario;

int main() {
  cout << "** Gerenciamento de Produtos **" << endl;

  while(sairDoSistema == 0){
    cout << "\n[ 1 ] Adicionar Produto" << endl;    
    cout << "[ 2 ] Listar Prosutos" << endl;
    cout << "[ 3 ] Buscar Produto" << endl;
    cout << "[ 4 ] Sair" << endl;

    cout << "\nDigite o número referente a funcionalidade: ";
    cin >> escolhaUsuario;

    switch(escolhaUsuario) {
      case 1: { //Cadastro de Produtos
        //variaveis dos valores que serão cadastradas no produto
        string valorNomeProduto;
        int valorCodigoProduto;
        float valorPrecoProduto;
       //system("cls"); LIMPA A TELA

        cout << "\n** ADICIONAR PRODUTO **" << endl;
        cin.ignore();  // Garantir que o buffer está limpo antes de usar getline

        for(int i = 0; i < 10; i++) {
          if(nomeProduto[i].empty()) { //verifica se a posição do vetor
            cout << "Nome do Produto: ";
            getline(cin, valorNomeProduto);
            nomeProduto[i] = valorNomeProduto;
            break;
          }
        }

        for(int i = 0; i < 10; i++) {
          if(codigoProduto[i] == 0) {
            cout << "Código do Produto: ";
            cin >> valorCodigoProduto;
            codigoProduto[i] = valorCodigoProduto;
            break;
          }
        }

        for(int i = 0; i < 10; i++) {
          if(precoProduto[i] == 0) {
            cout << "Valor do Produto: ";
            cin >> valorPrecoProduto;
            precoProduto[i] = valorPrecoProduto;
            break;
          }
        }
        cout << "\nProduto Cadastrado com SUCESSO" << endl;
        break;
      } 

      case 2: { //Exibe todos os produtos cadastrados
        //system("cls"); LIMPA A TELA
        cout << "\n** Produtos **" << endl;

        for(int i = 0; i < 10; i++) {
          if(nomeProduto[i].empty()) { //verifica se a posição do vetor está vazia
            cout << "Produto NÃO Cadastrado" << endl;
          } else {
            cout << "➤ " << nomeProduto[i] << endl;
          }
        } break;
      } break;

      case 3: {
        //system("cls"); LIMPA A TELA
        int codigoProdutoUsuario;
        
        cout << "\n** Buscar Produto **" << endl;
        cout << "Digite o código do produto: ";
        cin >> codigoProdutoUsuario;

        for(int i = 0; i < 10; i++) {
          if(codigoProduto[i] == 0) {
            
          } else if(codigoProduto[i] == codigoProdutoUsuario) {
            cout << "\nProduto: " << nomeProduto[i] << endl;
            break;
          }
        }
        
        break;
      }

      case 4: {
        //system("cls"); LIMPA A TELA
        sairDoSistema = 0;
        return sairDoSistema;
        break;
      }

      default: {
        cout << "\nComando INVÁLIDO" << endl;
        cout << "Tente Novamente" << endl;
      }
    }
  }
  return 0;
}
