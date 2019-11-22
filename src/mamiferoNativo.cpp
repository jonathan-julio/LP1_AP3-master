#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "animal.h"
#include "mamifero.h"
#include "mamiferoNativo.h"
#include "animalNativo.h"
#include "animalSilvestre.h"

using namespace std;

Mamifero_nativo::Mamifero_nativo(){
	setId_animal(0);		 
	setClasse("");
	setNome_cientifico("");
	setSexo(1);
	setTamanho(0);
	setDieta("");
	setIdFuncionario(0);
	setNome_batismo("");
	setCor_pelo("");
	setUf_origem("");
	setAutorizacao("");
	setAutorizacao_ibama("");
	
}

Mamifero_nativo::Mamifero_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, string corPelo, string ufOrigem, string autorizacao, string autorizacaoIbama){
	setId_animal(id_a);		 
	setClasse(classe);
	setNome_cientifico(nome_c);
	setSexo(sexo);
	setTamanho(tamanho);
	setDieta(dieta);
	setIdFuncionario(funcionario);
	setNome_batismo(nome_B);
	setCor_pelo(corPelo);
	setUf_origem(ufOrigem);
	setAutorizacao(autorizacao);
	setAutorizacao_ibama(autorizacaoIbama);
}


Mamifero_nativo::~Mamifero_nativo(){

}

ostream& operator<< (ostream &o, Mamifero_nativo &animal_){
	o << "*********Mamifero nativo**********" << endl
	  << "> ID animal........... " << animal_.getId_animal() << endl
	  << "> Classe.............. " << animal_.getClasse() << endl
	  << "> Nome cientifico..... " << animal_.getNome_cientifico() << endl
	  << "> Sexo................ " << animal_.getSexo() << endl
	  << "> Tamanho............. " << animal_.getTamnho() << endl
	  << "> Dieta............... " << animal_.getDieta() <<  endl
	  << "> ID funcionario...... " << animal_.getIdFuncionario() << endl
	  << "> Nome de batismo..... " << animal_.getNome_batismo() << endl
	  << "> Cor do pelo......... " << animal_.getCor_pelo() << endl
	  << "> UF de origem........ " << animal_.getUf_origem() << endl
	  << "> Autorização......... " << animal_.getCor_pelo() << endl
	  << "> Autorização IBAMA......... " << animal_.getAutorizacao_ibama() << endl;
	return o;
}