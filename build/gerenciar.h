#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef GERENCIAR_H
#define GERENCIAR_H

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include "veterinario.h"
#include "tratador.h"
#include "animal.h"

//incluir animais
#include "anfibioNativo.h"


class gerenciar{
	
private: 
	vector <Anfibio_nativo*> listaLoja_anfibioN;
	vector<Tratador*> tratador_vec;
	vector<Veterinario*> veterinario_vec;
	vector<int> tratador_int;
	vector<int> veterinario_int;
	vector<int> todos_funcionario;
	vector<int> todos_animais;

public:
	//gerenciar();
	//~gerenciar();
	
	bool listarAnfibioNativo();
	Animal addAnimal();
	Animal addAnimalCSV();
	//Anfibio_nativo addAnfibioNativo();
	//Anfibio_nativo addAnfibioNativoCSV();
	
	//void salvarAnfibioNativo();
	void addFuncionario();
	void alterarDadosAnimal();
	void consutarDados();
	void buscaAnimalFuncionario();
	//bool estoques();
	
	//bool buscaChassi();

};

#endif 