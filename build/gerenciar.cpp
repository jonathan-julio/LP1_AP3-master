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


//gerenciar::~gerenciar(){
//
//}


void gerenciar::addFuncionario(){
	int opcao2;
	cout<< "deseja cadastrar: \nVeterinario ----- 1.\nTratador -------- 2. " << endl;
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
		//cout<< "classe: "<< endl;
		//cin >> classe;
		classe = "anfibio nativo";
		cout << "dieta:"<< endl;
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
				todos_animais.push_back(id_animal);
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
void gerenciar::buscaAnimalFuncionario(){
	int escolha;
	int status = 0;
	cout << endl << "Lista de Tratadores" << endl;
	for (vector<Tratador*>::iterator it = tratador_vec.begin(); it != tratador_vec.end(); ++it){
			cout << "Nome: " << (**it).getNome_funcionario() << endl;
			cout << "ID: " << (**it).getId_funario() << endl << endl;
	}
	cout << endl << "Lista de Veterinario" << endl;
	for (vector<Veterinario*>::iterator it2 = veterinario_vec.begin(); it2 != veterinario_vec.end(); ++it2){
			cout << "Nome: " << (**it2).getNome_funcionario() << endl;
			cout << "ID: " << (**it2).getId_funario() << endl << endl;
	}

	cout << "Informe o id do tratador: ";
	cin >> escolha;
	cout << " " << endl;

	for (vector<Anfibio_nativo*>::iterator it3 = listaLoja_anfibioN.begin(); it3 != listaLoja_anfibioN.end(); ++it3){
		if (escolha == (**it3).getIdFuncionario()){
			cout << (**it3);
			status = 1;
		}
		
	}
	if (status == 0){
		cout << "Nenhum funcionario encontrado. " << endl;

	}

}

void gerenciar::alterarDadosAnimal(){
	int status = 0;
	int escolha,escolha2;
	string auxS;
	double auxD;
	int auxI;

	cout << "****** ID de animais ****** " << endl;
	for (vector<int>::iterator it = todos_animais.begin(); it != todos_animais.end(); ++it){
		
		cout << (*it) << endl;
		
	}
	cout << "Informe o ID do animal: ";
	cin >> escolha;
	cout << " " << endl;

	for (vector<Anfibio_nativo*>::iterator it3 = listaLoja_anfibioN.begin(); it3 != listaLoja_anfibioN.end(); ++it3){
		if (escolha == (**it3).getId_animal()){
			cout << "O que deseja alterar" << endl
		 		 << "Tamanha............... 1" << endl
		 		 << "ID do funcionario..... 2" << endl
		 		 << "Dieta................. 3" << endl
		 		 << "Total de mudas........ 4" << endl;
		 	cin >> escolha2;
		 	if(escolha2 == 1){
		 		cout << "Informe o nomo tamanho. (Type double)" << endl;
		 		cin >> auxD;
		 		(**it3).setTamanho(auxD);
		 		cout << "Sucesso!!" << endl;
		 		status = 1;
		 	}
		 	if(escolha2 == 2){
				cout << "Informe ID do funcionario. (Type int)" << endl;
		 		cin >> auxI;
		 		(**it3).setIdFuncionario(auxI);
		 		cout << "Sucesso!!" << endl;
		 		status = 1;
		 	}
		 	if(escolha2 == 3){
		 		cout << "Informe a nova dieta. (Type string)" << endl;
		 		cin >> auxS;
		 		(**it3).setDieta(auxS);
		 		cout << "Sucesso!!" << endl;
		 		status = 1;
		 	}
		 	if(escolha2 == 4){
		 		cout << "Informe o total de mudas. (Type int)" << endl;
		 		cin >> auxI;
		 		cout << "Informe quando foi a ultia muda. (Type int)" << endl;
		 		cin >> auxS;
		 		(**it3).setTotal_de_mudas(auxI);
		 		(**it3).setUltima_muda(auxS);
		 		cout << "Sucesso!!" << endl;
		 		status = 1;
		 	}

		}
		
	}
	if(status == 0){
		cout << "Erro, nenhum dado foi alterado. Tente novamente." << endl;
	}

}
void gerenciar::consutarDados(){
	int escolha,escolha2;
	int status = 0;
	cout << endl<< "Tipo de busca." << endl<< endl
		<< "Classe ................. 1" << endl
		<< "Animal determinado ..... 2" << endl;
	cin >> escolha;

	if (escolha == 1){
		//depois adicionar para outras classes
		cout << endl<< "Informe a classe." << endl<< endl
			 << "anfibio nativo ..... 1" << endl;
		cin >> escolha2;
		if (escolha2 == 1){
			for (vector<Anfibio_nativo*>::iterator it3 = listaLoja_anfibioN.begin(); it3 != listaLoja_anfibioN.end(); ++it3){
				cout << (**it3);
			status = 1;
			}
		}
	}
	if (escolha == 2){
		cout << "Informe o ID do animal" << endl<< endl;
		cin >> escolha2;
		//depois adicionar os outros vectors
		for (vector<Anfibio_nativo*>::iterator it = listaLoja_anfibioN.begin(); it != listaLoja_anfibioN.end(); ++it){
			if (escolha2 == (**it).getId_animal()){
				cout << (**it);
				status = 1;
			}
		}
	}
	if (status == 0){
		cout << "Nenhum animal encontrado." << endl << endl;
	}
}