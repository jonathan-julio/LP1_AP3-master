#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Funcionario{
	protected:
		int id_funario;
		string nome_funcionario;
		string cpf;
		short idade_funcionario;
		short tipo_sanguineo;
		char fator_rh;
		string especialidade;
		

//Getters e Setters
	public: 	

		int getId_funario();		 
		string getNome_funcionario();
		string getCpf();
		short getIdade_funcionario();
		short getTipo_sanguineo();
		char getFator_rh();
		string getEspecialidade();
		
		void setId_funario(int id_f);		 
		void setNome_funcionario(string nome_f);
		void setCpf(string cpf_f);
		void setIdade_funcionario(short idade_f);
		void setTipo_sanguineo(short tipo_s);
		void setFator_rh(char RH);
		void setEspecialidade(string especialidade_f);
};


#endif // FUNCIONARIO_H