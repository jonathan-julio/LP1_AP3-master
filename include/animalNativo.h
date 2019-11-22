#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANIMALNATIVO_H
#define ANIMALNATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>
#include "animalSilvestre.h"


using namespace std;

class Animal_nativo: public Animal_silvestre {

    protected:

		string uf_origem;
        string autorizacao;

	public: 		
		//Animal_nativo();
		//Animal_nativo(string ufOrigem, string autorizacao);
		//~Animal_nativo();

        string getUf_origem();
        string getAutorizacao();

        void setUf_origem(string ufOrigem);
        void setAutorizacao(string autorizacao_);

		friend ostream& operator << (ostream &o, Animal_nativo &animal_);
};


#endif // ANIMALNATIVO_H