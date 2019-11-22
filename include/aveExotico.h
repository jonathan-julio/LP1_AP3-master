#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AVEEXOTICO_H
#define AVEEXOTICO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "ave.h"
#include "animalExotico.h"
#include "animalSilvestre.h"

using namespace std;

class Ave_exotico:public Ave, public Animal_exotico{

	public: 		
		Ave_exotico();
		Ave_exotico(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, double tamanhoDoBico, double envergaduraAsas, string paisOrigem, string autorizacaoIbama);
		~Ave_exotico();

		friend ostream& operator << (ostream &o, Ave_exotico  &animal_);
};


#endif // AVEEXOTICO_H