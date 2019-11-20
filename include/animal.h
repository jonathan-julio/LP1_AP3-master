#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Animal{
	protected:
		int id_animal;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		int idFuncionario;
		string nome_batismo;

//Getters e Setters
	public: 	

		int getId_animal();		 
		string getClasse();
		string getNome_cientifico();
		char getSexo();
		double getTamnho();
		string getDieta();
		int getIdFuncionario();
		string getNome_batismo();

		
		void setId_animal(int id_a);		 
		void setClasse(string classe_a);
		void setNome_cientifico( string nome_c);
		void setSexo(char s);
		void setTamanho(double tamanho_a);
		void setDieta(string dieta_a);
		void setIdFuncionario(int id_f);
		void setNome_batismo(string nome_b);

	
};

#endif // ANIMAL_H