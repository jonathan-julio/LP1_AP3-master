#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef MAMIFEROEXOTICO_H
#define MAMIFEROEXOTICO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "mamifero.h"
#include "animalExotico.h"
#include "animalSilvestre.h"

using namespace std;

class Mamifero_exotico:public Mamifero, public Animal_exotico{

	public: 		
		Mamifero_exotico();
		Mamifero_exotico(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, string cor_pelo, string paisOrigem, string autorizacaoIbama);
		~Mamifero_exotico();

		friend ostream& operator << (ostream &o, Mamifero_exotico &animal_);
};


#endif // MAMIFEROEXOTICO_H