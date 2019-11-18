#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Tratador:public Funcionario{
	protected:
		int nivel_seguranca;

//Getters e Setters
	public: 	

		int getNivel_seguranca();		 	
		void getNivel_seguranca();		 

};


#endif // TRATADOR_H