#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"

using namespace std;

class Anfibio:public Animal{
	protected:
		int total_de_mudas;
		string ultima_muda;

//Getters e Setters
	public: 	

		int getTotal_de_mudas();		 
		string getUltima_muda();
		
		void setTotal_de_mudas(int totalMudas);		 
		void setUltima_muda(string ultimaMuda);
};


#endif // ANFIBIO_H