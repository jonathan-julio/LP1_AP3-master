#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"

//funcionario
#include "veterinario.h"
#include "tratador.h"
//animais
#include "anfibioNativo.h"
#include "anfibioExotico.h"
#include "mamiferoNativo.h"
#include "mamiferoExotico.h"
#include "reptilNativo.h"
#include "reptilExotico.h"
#include "aveNativo.h"
#include "aveExotico.h"


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
	int status = 0;
	string nome_cientifico,classe,dieta,nome_batismo;
	char sexo;
	double tamanho;
	Anfibio_nativo *novoAnimal = new Anfibio_nativo();
	cout<< "deseja cadastrar: "<<endl
		<<"Anfibio Nativo ------- 1."<<endl
		<<"Anfibio Exotico ------ 2."<<endl
		<<"Mamifero Nativo ------ 3."<<endl
		<<"Mamifero Exotico ----- 4."<<endl
		<<"Reptil Nativo -------- 5."<<endl
		<<"Reptil Exotico ------- 6."<<endl
		<<"Ave Nativo ----------- 7."<<endl
		<<"Ave Exotico ---------- 8."<<endl
		<<"Cancelar ----------------- 0. " << endl;
	
	cin >> opcao2;



	if (opcao2 !=1 && opcao2 !=2 && opcao2 !=3 && opcao2 !=4 && opcao2 !=5 && opcao2 !=6 && opcao2 !=7 && opcao2 !=8){
		cout << "Operacao cancelada." <<endl;
	}
	else{


		cout<< "id do animal:" << endl;
		cin >> id_animal;
		cout<< "id do Funcionario:"  << endl;
		cin >> idFuncionario;
		cout<< "nome cientifico: " << endl;
		cin >> nome_cientifico;
		cout << "dieta:"<< endl;
		cin >> dieta;
		cout<< "nome de batismo "<< endl;
		cin >> nome_batismo;
		cout<< "sexo: (F ou M)"<< endl;
		cin >> sexo;
		cout<< "tamanho: "<< endl;
		cin >> tamanho;

		//para cada animal 

		//ANFIBIO NATIVO
		if (opcao2 == 1){
			int total_de_mudas;
			string ultima_muda,autorizacaoIbama;

			classe = "anfibio nativo";
			cout<< "Todal de mudas: "<< endl;
			cin >> total_de_mudas;
			cout<< "Ultima Muda: "<< endl;
			cin >> ultima_muda;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					Anfibio_nativo *novoAnimal = new Anfibio_nativo( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,  total_de_mudas,  ultima_muda,autorizacaoIbama);
					listaLoja_anfibioN.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}

		//ANFIBIO EXOTICO
		if (opcao2 == 2){
			int total_de_mudas;
			string ultima_muda;
			string paisOrigem;
			string autorizacaoIbama;
			
			classe = "anfibio exotico";
			cout<< "Todal de mudas: "<< endl;
			cin >> total_de_mudas;
			cout<< "Ultima Muda: "<< endl;
			cin >> ultima_muda;
			cout<< "Pais de origem: "<< endl;
			cin >> paisOrigem;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
												
					Anfibio_exotico *novoAnimal = new Anfibio_exotico( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,  total_de_mudas,  ultima_muda,paisOrigem , autorizacaoIbama);
					listaLoja_anfibioE.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
		//MAMIFERO NATIVO
		if (opcao2 == 3){
			string cor_pelo, ufOrigem, autorizacao,autorizacaoIbama;
			
			classe = "mamifero nativo";
			cout<< "Cor do pelo: "<< endl;
			cin >> cor_pelo;
			cout<< "UF de Origem: "<< endl;
			cin >> ufOrigem;
			cout<< "Autorizacao: "<< endl;
			cin >> autorizacao;
			cout<< "Autorizacao Ibama: "<< endl;
			cin >> autorizacaoIbama;
			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Mamifero_nativo *novoAnimal = new Mamifero_nativo( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo, cor_pelo,ufOrigem,autorizacao, autorizacaoIbama);
					listaLoja_mamiferoN.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
		//MAMIFERO EXOTICO
		if (opcao2 == 4){
			string cor_pelo,  paisOrigem, autorizacaoIbama;
			
			classe = "mamifero exotico";
			cout<< "Cor do pelo: "<< endl;
			cin >> cor_pelo;
			cout<< "Pais origem: "<< endl;
			cin >> paisOrigem;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Mamifero_exotico *novoAnimal = new Mamifero_exotico( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,  cor_pelo,  paisOrigem, autorizacaoIbama);
					listaLoja_mamiferoE.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
		//REPTIL NATIVO
		if (opcao2 == 5){
			bool venenoso;
			int venenosoAux;
			string tipo_veneno, autorizacaoIbama;
			
			classe = "reptil nativo";
			cout<< "Venenoso(1 para SIM e 2 para NAO.): "<< endl;
			cin >> venenosoAux;
			if(venenosoAux == 1){
				venenoso = true;
			}
			else{
				venenoso = false;
			}
			cout<< "Tipo de veneno: "<< endl;
			cin >> tipo_veneno;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Reptil_nativo *novoAnimal = new Reptil_nativo( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo, venenoso, tipo_veneno, autorizacaoIbama);
					listaLoja_reptilN.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
		//REPTIL EXOTICO
		if (opcao2 == 6){
			bool venenoso;
			int venenosoAux;
			string tipo_veneno, paisOrigem,autorizacaoIbama;
			
			classe = "reptil exotico";
			cout<< "Venenoso(1 para SIM e 2 para NAO.): "<< endl;
			cin >> venenosoAux;
			if(venenosoAux == 1){
				venenoso = true;
			}
			else{
				venenoso = false;
			}
			cout<< "Pais de origem: "<< endl;
			cin >> paisOrigem;
			cout<< "Tipo de veneno: "<< endl;
			cin >> tipo_veneno;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Reptil_exotico *novoAnimal = new Reptil_exotico( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo, venenoso, tipo_veneno, paisOrigem, autorizacaoIbama);
					listaLoja_reptilE.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}

		//AVE NATIVA
		if (opcao2 == 7){
			
			double tamanhoDoBico, envergaduraAsas;
			string ufOrigem,autorizacao,  autorizacaoIbama;


			classe = "ave nativo";
			cout<< "tamanho do bico: "<< endl;
			cin >> tamanhoDoBico;
			cout<< "Envergadura das asas: "<< endl;
			cin >> envergaduraAsas;
			cout<< "UF de Origem: "<< endl;
			cin >> ufOrigem;
			cout<< "Autorizacao: "<< endl;
			cin >> autorizacao;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Ave_nativo *novoAnimal = new Ave_nativo( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,   tamanhoDoBico,  envergaduraAsas,  ufOrigem,  autorizacao,  autorizacaoIbama);
					listaLoja_aveN.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
		//AVE EXOTICO
		if (opcao2 == 8){
			double tamanhoDoBico, envergaduraAsas;
			string autorizacao,  autorizacaoIbama;


			classe = "ave exotico";
			cout<< "tamanho do bico: "<< endl;
			cin >> tamanhoDoBico;
			cout<< "Envergadura das asas: "<< endl;
			cin >> envergaduraAsas;
			cout<< "Autorizacao: "<< endl;
			cin >> autorizacao;
			cout<< "Autorizacao do Ibama: "<< endl;
			cin >> autorizacaoIbama;

			for (vector<int>::iterator it = todos_funcionario.begin(); it != todos_funcionario.end(); ++it){
				if ((*it) == idFuncionario){
					
					Ave_exotico *novoAnimal = new Ave_exotico( id_animal, classe, nome_cientifico, sexo, tamanho,  dieta,  idFuncionario,   nome_batismo,   tamanhoDoBico,  envergaduraAsas,  autorizacao,  autorizacaoIbama);
					listaLoja_aveE.push_back(novoAnimal);
					todos_animais.push_back(id_animal);
					status = 1;
					cout << endl << "Animal cadastrado." << endl;
				}
			}
		}
	}
	if(status == 0){
			cout << endl << "ID do funcionario não encontrado. Operacao CANCELADA!" << endl;
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

	vector<Reptil_exotico*> listaLoja_reptilE;
	vector<Reptil_nativo*> listaLoja_reptilN;


	for (vector<Anfibio_nativo*>::iterator animal1 = listaLoja_anfibioN.begin(); animal1 != listaLoja_anfibioN.end(); ++animal1){
		if (escolha == (**animal1).getIdFuncionario()){
			cout << (**animal1);
		}	
		status = 1;	
	}
	for (vector<Anfibio_exotico*>::iterator animal2 = listaLoja_anfibioE.begin(); animal2 != listaLoja_anfibioE.end(); ++animal2){
		if (escolha == (**animal2).getIdFuncionario()){
			cout << (**animal2);
		}	
		status = 1;	
	}
	for (vector<Ave_nativo*>::iterator animal3 = listaLoja_aveN.begin(); animal3 != listaLoja_aveN.end(); ++animal3){
		if (escolha == (**animal3).getIdFuncionario()){
			cout << (**animal3);
		}	
		status = 1;	
	}
	for (vector<Ave_exotico*>::iterator animal4 = listaLoja_aveE.begin(); animal4 != listaLoja_aveE.end(); ++animal4){
		if (escolha == (**animal4).getIdFuncionario()){
			cout << (**animal4);
		}	
		status = 1;	
	}
	for (vector<Mamifero_nativo*>::iterator animal5 = listaLoja_mamiferoN.begin(); animal5 != listaLoja_mamiferoN.end(); ++animal5){
		if (escolha == (**animal5).getIdFuncionario()){
			cout << (**animal5);
		}	
		status = 1;	
	}
	for (vector<Mamifero_exotico*>::iterator animal6 = listaLoja_mamiferoE.begin(); animal6 != listaLoja_mamiferoE.end(); ++animal6){
		if (escolha == (**animal6).getIdFuncionario()){
			cout << (**animal6);
		}	
		status = 1;	
	}
	for (vector<Reptil_exotico*>::iterator animal7 = listaLoja_reptilE.begin(); animal7 != listaLoja_reptilE.end(); ++animal7){
		if (escolha == (**animal7).getIdFuncionario()){
			cout << (**animal7);
		}	
		status = 1;	
	}
	for (vector<Reptil_nativo*>::iterator animal8 = listaLoja_reptilN.begin(); animal8 != listaLoja_reptilN.end(); ++animal8){
		if (escolha == (**animal8).getIdFuncionario()){
			cout << (**animal8);
		}	
		status = 1;	
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
			 <<"Anfibio nativo ------- 1" << endl
			 <<"Anfibio Exotico ------ 2."<<endl
			 <<"Mamifero Nativo ------ 3."<<endl
			 <<"Mamifero Exotico ----- 4."<<endl
			 <<"Reptil Nativo -------- 5."<<endl
			 <<"Reptil Exotico ------- 6."<<endl
			 <<"Ave Nativo ----------- 7."<<endl
			 <<"Ave Exotico ---------- 8."<<endl;
		cin >> escolha2;
		if (escolha2 == 1 || escolha2 == 2 || escolha2 == 3 || escolha2 == 4 || escolha2 == 5 || escolha2 == 6 || escolha2 == 7 || escolha2 == 8){
			if (escolha2 == 1){
				for (vector<Anfibio_nativo*>::iterator animal1 = listaLoja_anfibioN.begin(); animal1 != listaLoja_anfibioN.end(); ++animal1){
					cout << (**animal1);
				status = 1;
				}
			}
			if (escolha2 == 2){
				for (vector<Anfibio_exotico*>::iterator animal2 = listaLoja_anfibioE.begin(); animal2 != listaLoja_anfibioE.end(); ++animal2){
					cout << (**animal2);
				status = 1;
				}
			}
			if (escolha2 == 3){
				for (vector<Mamifero_nativo*>::iterator animal3 = listaLoja_mamiferoN.begin(); animal3 != listaLoja_mamiferoN.end(); ++animal3){
					cout << (**animal3);
				status = 1;
				}
			}
			if (escolha2 == 4){
				for (vector<Mamifero_exotico*>::iterator animal4 = listaLoja_mamiferoE.begin(); animal4 != listaLoja_mamiferoE.end(); ++animal4){
					cout << (**animal4);
				status = 1;
				}
			}
			if (escolha2 == 5){
				for (vector<Reptil_nativo*>::iterator animal5 = listaLoja_reptilN.begin(); animal5 != listaLoja_reptilN.end(); ++animal5){
					cout << (**animal5);
				status = 1;
				}
			}
			if (escolha2 == 6){
				for (vector<Reptil_exotico*>::iterator animal6 = listaLoja_reptilE.begin(); animal6 != listaLoja_reptilE.end(); ++animal6){
					cout << (**animal6);
				status = 1;
				}
			}
			if (escolha2 == 7){
				for (vector<Ave_nativo*>::iterator animal7 = listaLoja_aveN.begin(); animal7 != listaLoja_aveN.end(); ++animal7){
					cout << (**animal7);
				status = 1;
				}
			}if (escolha2 == 8){
				for (vector<Ave_exotico*>::iterator animal8 = listaLoja_aveE.begin(); animal8 != listaLoja_aveE.end(); ++animal8){
					cout << (**animal8);
				status = 1;
				}
			}
		}
		else{
			cout << "Entrada invalida." << endl;
		}
	}
	else if (escolha == 2){
		cout << "Informe o ID do animal" << endl<< endl;
		cin >> escolha2;
		//depois adicionar os outros vectors
		for (vector<Anfibio_nativo*>::iterator it = listaLoja_anfibioN.begin(); it != listaLoja_anfibioN.end(); ++it){
			if (escolha2 == (**it).getId_animal()){
				cout << (**it);
				status = 1;
			}
		}
		for (vector<Anfibio_exotico*>::iterator animal2 = listaLoja_anfibioE.begin(); animal2 != listaLoja_anfibioE.end(); ++animal2){
			if (escolha2 == (**animal2).getId_animal()){
				cout << (**animal2);
				status = 1;
			}
		}
		for (vector<Mamifero_nativo*>::iterator animal3 = listaLoja_mamiferoN.begin(); animal3 != listaLoja_mamiferoN.end(); ++animal3){
			if (escolha2 == (**animal3).getId_animal()){
				cout << (**animal3);
				status = 1;
			}
		}
		for (vector<Mamifero_exotico*>::iterator animal4 = listaLoja_mamiferoE.begin(); animal4 != listaLoja_mamiferoE.end(); ++animal4){
			if (escolha2 == (**animal4).getId_animal()){
				cout << (**animal4);
				status = 1;
			}
		
		}			
		for (vector<Reptil_nativo*>::iterator animal5 = listaLoja_reptilN.begin(); animal5 != listaLoja_reptilN.end(); ++animal5){
			if (escolha2 == (**animal5).getId_animal()){
				cout << (**animal5);
				status = 1;
			}
		
		}
		for (vector<Reptil_exotico*>::iterator animal6 = listaLoja_reptilE.begin(); animal6 != listaLoja_reptilE.end(); ++animal6){
			if (escolha2 == (**animal6).getId_animal()){
				cout << (**animal6);
				status = 1;
			}
		
		}	
		for (vector<Ave_nativo*>::iterator animal7 = listaLoja_aveN.begin(); animal7 != listaLoja_aveN.end(); ++animal7){
			if (escolha2 == (**animal7).getId_animal()){
				cout << (**animal7);
				status = 1;
			}
		
		}
		for (vector<Ave_exotico*>::iterator animal8 = listaLoja_aveE.begin(); animal8 != listaLoja_aveE.end(); ++animal8){
			if (escolha2 == (**animal8).getId_animal()){
				cout << (**animal8);
				status = 1;
			}
		
		}
			
	}
	if (status == 0){
		cout << "Nenhum animal encontrado." << endl << endl;
	}
}