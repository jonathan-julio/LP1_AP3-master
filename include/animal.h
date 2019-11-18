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
		Veterinario veterinario;
		Tratador tratador;
		string nome_batismo;

//Getters e Setters
	public: 	

		int getId_animal();		 
		string getClasse();
		string getNome_cientifico();
		char getSexo();
		double getTamnho();
		string getDieta();
		Veterinario getVeterinario();
		Tratador getTratador();
		string getNome_batismo();

		
		void setId_animal();		 
		void setClasse();
		void setNome_cientifico();
		void setSexo();
		void setTamnho();
		void setDieta();
		void setVeterinario();
		void setTratador();
		void setNome_batismo();

	
};

#endif // ANIMAL_H