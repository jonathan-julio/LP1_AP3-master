#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "animal.h"
#include "reptil.h"
#include "reptilNativo.h"
#include "animalNativo.h"
#include "animalSilvestre.h"


using namespace std;

Reptil_nativo::Reptil_nativo(){
	setId_animal(0);		 
	setClasse("");
	setNome_cientifico("");
	setSexo(1);
	setTamanho(0);
	setDieta("");
	setIdFuncionario(0);
	setNome_batismo("");
	setVenenoso(false);
    setTipo_veneno("");
	setAutorizacao("");
		
}

Reptil_nativo::Reptil_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, bool ven, string tipoVeneno, string autorizacaoIbama){
	setId_animal(id_a);		 
	setClasse(classe);
	setNome_cientifico(nome_c);
	setSexo(sexo);
	setTamanho(tamanho);
	setDieta(dieta);
	setIdFuncionario(funcionario);
	setNome_batismo(nome_B);
	setVenenoso(venenoso);
    setTipo_veneno(tipoVeneno);
	setAutorizacao(autorizacaoIbama);
}


Reptil_nativo::~Reptil_nativo(){

}

ostream& operator<< (ostream &o, Reptil_nativo &animal_){
	o << "*********Reptil nativo**********" << endl
	  << "> ID animal........... " << animal_.getId_animal() << endl
	  << "> Classe.............. " << animal_.getClasse() << endl
	  << "> Nome cientifico..... " << animal_.getNome_cientifico() << endl
	  << "> Sexo................ " << animal_.getSexo() << endl
	  << "> Tamanho............. " << animal_.getTamnho() << endl
	  << "> Dieta............... " << animal_.getDieta() <<  endl
	  << "> ID funcionario...... " << animal_.getIdFuncionario() << endl
	  << "> Nome de batismo..... " << animal_.getNome_batismo() << endl
	  << "> venenoso............ " << animal_.getVenenoso() << endl
      << "> Tipo do veneno...... " << animal_.getTipo_veneno() << endl
	  << "> Autorização IBAMA... " << animal_.getAutorizacao() << endl;
	return o;
}