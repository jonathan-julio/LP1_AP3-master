#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Animal_silvestre{

    protected:

		string autorizacao_ibama;
   

	public: 		
		//Animal_silvestre();
		//Animal_silvestre(string autorizacaoIbama);
		//~Animal_silvestre();

        string getAutorizacao_ibama();
        
        void setAutorizacao_ibama(string autorizacaoIbama);
        
		friend ostream& operator << (ostream &o, Animal_silvestre &animal_);
};


#endif // ANIMALSILVESTRE_H