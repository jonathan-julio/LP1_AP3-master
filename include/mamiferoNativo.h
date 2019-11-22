#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef MAMIFERONATIVO_H
#define MAMIFERONATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "mamifero.h"
#include "animalNativo.h"
#include "animalSilvestre.h"

using namespace std;

class Mamifero_nativo:public Mamifero, public Animal_nativo{

	public: 		
		Mamifero_nativo();
		Mamifero_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, string cor_pelo, string ufOrigem, string autorizacao, string autorizacaoIbama);
		~Mamifero_nativo();

		friend ostream& operator << (ostream &o, Mamifero_nativo &animal_);
};


#endif // MAMIFERONATIVO_H