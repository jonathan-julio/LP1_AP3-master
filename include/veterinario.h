#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Veterinario:public Funcionario{
	protected:
		string crmv;

//Getters e Setters
	public: 	

		string getCrmv();		 	
		void setCrmv();		 

};


#endif // VETERINARIO_H