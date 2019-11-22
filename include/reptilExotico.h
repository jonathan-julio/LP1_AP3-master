#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef REPTILEXOTICO_H
#define REPTILEXOTICO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "reptil.h"
#include "animalExotico.h"
#include "animalSilvestre.h"

using namespace std;

class Reptil_exotico:public Reptil, public Animal_exotico{
	
	public: 		
		Reptil_exotico();
		Reptil_exotico(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, bool venenoso, string tipo_veneno, string paisOrigem, string autorizacaoIbama);
		~Reptil_exotico();

		friend ostream& operator << (ostream &o, Reptil_exotico &animal_);
};


#endif // REPTILEXOTICO_H