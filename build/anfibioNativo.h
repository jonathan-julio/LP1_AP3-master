#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"
#include "anfibio.h"

using namespace std;

class Anfibio_nativo:public Anfibio{

	public: 		
		Anfibio_nativo();
		Anfibio_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, int total_mudas, string ultima_muda);
		~Anfibio_nativo();

		friend ostream& operator << (ostream &o, Anfibio_nativo &animal_);
};


#endif // ANFIBIONATIVO_H