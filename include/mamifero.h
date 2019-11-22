#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animal.h"

using namespace std;

class Mamifero:public Animal{
	protected:
		string cor_pelo;

//Getters e Setters
	public: 	
	 
		string getCor_pelo();
		 
		void setCor_pelo(string corPelo);
};


#endif // MAMIFERO_H