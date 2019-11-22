#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef REPTIL_H
#define REPTIL_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"

using namespace std;

class Reptil:public Animal{
	protected:
		bool venenoso;
		string tipo_veneno;

//Getters e Setters
	public: 	
	 	
	 	bool getVenenoso();
		string getTipo_veneno();
		 
		void setVenenoso(bool ven);
		void setTipo_veneno(string tipoVeneno);
};


#endif // REPTIL_H