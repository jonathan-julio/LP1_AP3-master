#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AVENATIVO_H
#define AVENATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "ave.h"
#include "animalNativo.h"
#include "animalSilvestre.h"


using namespace std;

class Ave_nativo:public Ave, public Animal_nativo{

	public: 		
		Ave_nativo();
		Ave_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, double tamanhoDoBico, double envergaduraAsas, string ufOrigem, string autorizacao, string autorizacaoIbama);
		~Ave_nativo();

		friend ostream& operator << (ostream &o, Ave_nativo &animal_);
};


#endif // AVENATIVO_H