#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include "veterinario.h"
#include "tratador.h"

#include "gerenciar.h"
using namespace std;

gerenciar feira;

int main (int argc, char const *argv[]){
	//g++ -o exe main.cpp anfibioNativo.cpp animal.cpp funcionario.cpp gerenciar.cpp veterinario.cpp anfibio.cpp
	int opcao = -1;
	while (opcao!= 0){
		cout << endl << "++++++++++++++++++++++++++++++++"<<endl
		<< endl << "Escolha a opcao desejada"<<endl	
		<< "Digite 1 - Cadastrar um novo animal a ser comercializado "<< endl
		<< "Digite 2 - Remover animal ja comercializado "<<endl
		<< "Digite 3 - Alterar dados cadastrais de um animal "<<endl
		<< "Digite 4 - Consultar os dados cadastrais de um determinado animal ou por uma classe de animal "<< endl
		<< "Digite 5 - Consultar animais sob responsabilidade de um determinado veterinario ou tratador "<< endl
		<< "Digite 6 - cadastrar veterinario ou tratador "<< endl
		<< "Digite 0 - Sair"<< endl
		<< "++++++++++++++++++++++++++++++++"<<endl
		<< endl<< "Digite sua Escolha: " <<endl;
	
		cin >> opcao; 

		switch (opcao){
			case 1:
				feira.addAnimal();
				break;					
			case 2: 
					
				break;	
			case 3: 
				feira.alterarDadosAnimal();
				break;	
			case 4:
					feira.consutarDados();
				break;
			case 5:
				feira.buscaAnimalFuncionario();
				break;
			case 6:
				feira.addFuncionario();
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
