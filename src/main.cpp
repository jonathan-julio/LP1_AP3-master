#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include "veterinário.h"
#include "tratador.h"

using namespace std;


int main (int argc, char const *argv[]){
	vector <veterinario *> listaVeterinario;
	vector <int *> idVeterinario;
	vector <int *> idTratador;
	vector <int *> idFuncionario;
	vector <tratador *> listaTratador;

	int opcao = -1;
	int opcao2 = 0;
	while (opcao!= 0){
		cout << endl << "++++++++++++++++++++++++++++++++"<<endl
		<< endl << "Escolha a opcao desejada"<<endl	
		<< "Digite 1 - Cadastrar um novo animal a ser comercializado "<< endl
		<< "Digite 2 - Remover animal já comercializado "<<endl
		<< "Digite 3 - Alterar dados cadastrais de um animal "<<endl
		<< "Digite 4 - Consultar os dados cadastrais de um determinado animal ou por uma classe de animal "<< endl
		<< "Digite 5 - Consultar animais sob responsabilidade de um determinado veterinário ou tratador "<< endl
		<< "Digite 6 - cadastrar veterinário ou tratador "<< endl
		<< "Digite 0 - Sair"<< endl
		<< "++++++++++++++++++++++++++++++++"<<endl
		<< endl<< "Digite sua Escolha: " <<endl;
	
		cin >> opcao; 

		switch (opcao){
			case 1:
				int 
				cout<< "deseja cadastrar: \nVeterinário ----- 1.\nTratador -------- 2. " << endl;
				cin >> opcao2;
				if (opcao2 == 1 ){
					int id;
					string nome_funcionario, cpf,especialidade,crmv;
					short idade_funcionario, tipo_sanguineo, fator_rh;
					int status = 0;
					cout<< "Id do funcionario:" << endl;
					cin >> id;
					cout<< "Nome do funcionario:" << endl;
					cin >> nome_funcionario;
					cout<< "CPF do funcionario:" << endl;
					cin >> cpf;
					cout<< "Especialidade do funcionario:" << endl;
					cin >> especialidade;
					cout<< "Crmv do funcionario:" << endl;
					cin >> crmv;
					cout<< "Idade do funcionario:" << endl;
					cin >> idade_funcionario;
					cout<< "Tipo sanguineo do funcionario:" << endl;
					cin >> tipo_sanguineo;
					cout<< "Fator RH do funcionario:" << endl;
					cin >> fator_rh;
					for (vector<int*>::iterator it = idFuncionario.begin(); it != idFuncionario.end(); ++it){
						if ((**it) == id){
							cout << endl << "ID ja cadastrado. Operacao CANCELADA!" << endl;
							status = 1;
						}
					}
					if (status == 0 ){
						Veterinario *novoVeterinario = new Veterinario(int id,string nome_funcionario,string cpf,short idade_funcionario,short tipo_sanguineo,char fator_rh,string especialidade,string crmv);
						listaVeterinario.push_back(novoVeterinario);
						idFuncionario.push_back(id);
						idVeterinario.push_back(id);
					}

				}
				
				break;					
			case 2: 
					
				break;	
			case 3: 
					
				break;	
			case 4:
					
				break;
			case 5:
					
				break;
			case 6:
					
				break;
			case 0:
					cout<<endl<< "Ate mais!" << endl;
					return 0;
			default:
			cin.clear();
			cin.ignore(200,'\n');
			cout << endl << "Entrada invalida, digite novamente" <<endl;
		}
	}
	return 0;


}
