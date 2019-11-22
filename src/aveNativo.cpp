#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "animal.h"
#include "ave.h"
#include "aveNativo.h"
#include "animalNativo.h"
#include "animalSilvestre.h"

using namespace std;

Ave_nativo::Ave_nativo(){
	setId_animal(0);		 
	setClasse("");
	setNome_cientifico("");
	setSexo(1);
	setTamanho(0);
	setDieta("");
	setIdFuncionario(0);
	setNome_batismo("");
    setTamanho_do_bico_cm(0);
	setEnvergadura_das_asas(0);
    setUf_origem("");
    setAutorizacao("");
	setAutorizacao_ibama("");
	
}

Ave_nativo::Ave_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B,double tamanhoBico, double envergaduraAsas, string ufOrigem, string autorizacao, string autorizacaoIbama){
	setId_animal(id_a);		 
	setClasse(classe);
	setNome_cientifico(nome_c);
	setSexo(sexo);
	setTamanho(tamanho);
	setDieta(dieta);
	setIdFuncionario(funcionario);
	setNome_batismo(nome_B);
    setTamanho_do_bico_cm(tamanhoBico);
    setEnvergadura_das_asas(envergaduraAsas);
    setUf_origem(ufOrigem);
    setAutorizacao(autorizacao);
	setAutorizacao_ibama(autorizacaoIbama);

}


Ave_nativo::~Ave_nativo(){

}

ostream& operator<< (ostream &o, Ave_nativo &animal_){
	o << "*********Ave nativo**********" << endl
	  << "> ID animal........... " << animal_.getId_animal() << endl
	  << "> Classe.............. " << animal_.getClasse() << endl
	  << "> Nome cientifico..... " << animal_.getNome_cientifico() << endl
	  << "> Sexo................ " << animal_.getSexo() << endl
	  << "> Tamanho............. " << animal_.getTamnho() << endl
	  << "> Dieta............... " << animal_.getDieta() <<  endl
	  << "> ID funcionario...... " << animal_.getIdFuncionario() << endl
	  << "> Nome de batismo..... " << animal_.getNome_batismo() << endl
	  << "> UF de origem........ " << animal_.getUf_origem() << endl
      << "> Autorização......... " << animal_.getAutorizacao() << endl
	  << "> Autorização IBAMA... " << animal_.getAutorizacao_ibama() << endl;
	return o;
}