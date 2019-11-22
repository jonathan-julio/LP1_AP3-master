#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANIMALEXOTICO_H
#define ANIMALEXOTICO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "animalSilvestre.h"


using namespace std;

class Animal_exotico: public Animal_silvestre {

    protected:

		string pais_origem;
   

	public: 		
		//Animal_exotico();
		//Animal_exotico(string paisOrigem);
		//~Animal_exotico();

        string getPais_origem();
        
        void setPais_origem(string paisOrigem);
        
		friend ostream& operator << (ostream &o, Animal_exotico &animal_);
};


#endif // ANIMALEXOTICO_H