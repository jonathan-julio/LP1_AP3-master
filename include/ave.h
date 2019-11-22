#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef AVE_H
#define AVE_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"

using namespace std;

class Ave:public Animal{
	protected:
		double tamanho_do_bico_cm;
		double envergadura_das_asas;

//Getters e Setters
	public: 	
	 	
	 	double getTamanho_do_bico_cm();
		double getEnvergadura_das_asas();
		 
		void setTamanho_do_bico_cm(double tamanhoBico);
		void setEnvergadura_das_asas(double envergaduraAsas);
};


#endif // AVE_H