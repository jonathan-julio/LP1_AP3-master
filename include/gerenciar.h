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
#include "anfibioExotico.h"
#include "mamiferoNativo.h"
#include "mamiferoExotico.h"
#include "reptilNativo.h"
#include "reptilExotico.h"
#include "aveNativo.h"
#include "aveExotico.h"

class gerenciar{
	
private: 
	//vetores animais 
	vector <Anfibio_nativo*> listaLoja_anfibioN;
	vector<Anfibio_exotico*> listaLoja_anfibioE;
	vector<Ave_nativo*> listaLoja_aveN;
	vector<Ave_exotico*> listaLoja_aveE;
	vector<Mamifero_nativo*> listaLoja_mamiferoN;
	vector<Mamifero_exotico*> listaLoja_mamiferoE;
	vector<Reptil_exotico*> listaLoja_reptilE;
	vector<Reptil_nativo*> listaLoja_reptilN;

	//vetores funcionarios
	vector<Tratador*> tratador_vec;
	vector<Veterinario*> veterinario_vec;
	
	//vetores auxiliares
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