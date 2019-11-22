#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef REPTILNATIVO_H
#define REPTILNATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "reptil.h"
#include "animalNativo.h"
#include "animalSilvestre.h"

using namespace std;

class Reptil_nativo:public Reptil, public Animal_nativo{

	public: 		
		Reptil_nativo();
		Reptil_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, bool venenoso, string tipo_veneno, string autorizacaoIbama);
		~Reptil_nativo();

		friend ostream& operator << (ostream &o, Reptil_nativo &animal_);
};


#endif // REPTILNATIVO_H