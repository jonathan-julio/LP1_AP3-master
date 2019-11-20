#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>

#include "funcionario.h"

using namespace std;

class Veterinario : public Funcionario{
	private:
		string crmv;

//Getters e Setters
	public: 	
	
		Veterinario(int id_funario,string nome_funcionario,string cpf,short idade_funcionario,short tipo_sanguineo,char fator_rh,string especialidade,string crmv_a);
		~Veterinario();
		string getCrmv();		 	
		void setCrmv(string crmv_a);		 

};


#endif // VETERINARIO_H