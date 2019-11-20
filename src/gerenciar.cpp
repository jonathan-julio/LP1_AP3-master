#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "anfibioNativo.h"
#include "veterinario.h"
#include "tratador.h"
#include "anfibioNativo.h"


using namespace std;
using std::string;
using std::getline;


gerenciar::~gerenciar(){

}


void gerenciar::addFuncionario(){
	int opcao2;
	cout<< "deseja cadastrar: \nVeterinário ----- 1.\nTratador -------- 2. " << endl;
	cin >> opcao2;
	
	if (opcao2 == 1 ){
		int id;
	
		string nome_funcionario, cpf,especialidade,crmv;
		char fator_rh;
		short idade_funcionario, tipo_sanguineo;
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

		for (vector<int>::iterator it = veterinario_int.begin(); it != veterinario_int.end(); ++it){
			if ((*it) == id){
				cout << endl << "ID ja cadastrado. Operacao CANCELADA!" << endl;
				status = 1;
			}
		}
		if (status == 0 ){
			Veterinario *novoVeterinario = new Veterinario(id, nome_funcionario, cpf, idade_funcionario, tipo_sanguineo, fator_rh, especialidade, crmv);
			veterinario_vec.push_back(novoVeterinario);
			todos_funcionario.push_back(id);
			veterinario_int.push_back(id);
		}
	}

}
Animal gerenciar::addAnimal(){
	int opcao2;
	int id_animal;
	int idFuncionario;
	string nome_cientifico,classe,dieta,nome_batismo;
	char sexo;
	double tamanho;
	cout<< "deseja cadastrar: \nAnfibio Nativo ----- 1.\nNada --------------- 2. " << endl;
	cin >> opcao2;
	Anfibio_nativo *novoAnimal = new Anfibio_nativo();
	if (opcao2 == 1){
		int total_de_mudas;
		string ultima_muda;
		int status = 0;

		cout<< "id do animal:" << endl;
		cin >> id_animal;
		cout<< "id do Funcionario:"  << endl;
		cin >> idFuncionario;
		cout<< "nome cientifico: " << endl;
		cin >> nome_cientifico;
		cout<< "classe: "<< endl;
		cin >> classe;
		cout<< "dieta:"<< endl;
		cin >> dieta;
		cout<< "nome de batismo "<< endl;
		cin >> nome_batismo;
		cout<< "sexo: (F ou M)"<< endl;
		cin >> sexo;
		cout<< "tamanho: "<< endl;
		cin >> tamanho;
		cout<< "Todal de mudas: "<< endl;
		cin >> total_de_mudas;
		cout<< "Ultima Muda: "<< endl;
		cin >> ultima_muda;
		for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
			if ((*it) == idFuncionario){
				
				Anfibio_nativo *novoAnimal = new Anfibio_nativo( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,  total_de_mudas,  ultima_muda);
				listaLoja_anfibioN.push_back(novoAnimal);
				status = 1;
				cout << endl << "Animal cadastrado." << endl;
			}
		}
		if(status == 0){
			cout << endl << "ID do funcionario não encontrado. Operacao CANCELADA!" << endl;
		}

	}
	return *novoAnimal;
}
