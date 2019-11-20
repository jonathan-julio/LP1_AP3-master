#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef GERENCIAR_H
#define GERENCIAR_H

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

//incluir animais
#include "anfibioNativo.h"


class gerenciar{
	
private: 
	vector <anfibioNativo*> listaLoja_anfibioN;

public:
	//gerenciar();
	~gerenciar();
	
	bool listarAnfibioNativo();
	anfibioNativo addAnfibioNativo();
	anfibioNativo addAnfibioNativoCSV();
	
	void salvarAnfibioNativo();
	void addfuncionario();
	bool estoques();
	void buscaID();
	//bool buscaChassi();

};

#endif 