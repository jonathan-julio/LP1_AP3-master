#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANFIBIOEXOTICO_H
#define ANFIBIOEXOTICO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "anfibio.h"
#include "animalExotico.h"

using namespace std;

class Anfibio_exotico:public Anfibio, public Animal_exotico{

	public: 		
		Anfibio_exotico();
		Anfibio_exotico(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, int total_mudas, string ultima_muda, string paisOrigem, string autorizacaoIbama);
		~Anfibio_exotico();

		friend ostream& operator << (ostream &o, Anfibio_exotico &animal_);
};


#endif // ANFIBIOEXOTICO_H