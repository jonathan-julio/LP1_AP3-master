#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "animal.h"
#include "anfibio.h"
#include "anfibioExotico.h"
#include "animalExotico.h"
#include "animalSilvestre.h"
using namespace std;

Anfibio_exotico::Anfibio_exotico(){
	setId_animal(0);		 
	setClasse("");
	setNome_cientifico("");
	setSexo(1);
	setTamanho(0);
	setDieta("");
	setIdFuncionario(0);
	setNome_batismo("");
	setTotal_de_mudas(0);		 
	setUltima_muda("");
	setPais_origem("");
	setAutorizacao_ibama("");
}

Anfibio_exotico::Anfibio_exotico(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, int total_mudas, string ultima_muda, string paisOrigem, string autorizacaoIbama){
	setId_animal(id_a);		 
	setClasse(classe);
	setNome_cientifico(nome_c);
	setSexo(sexo);
	setTamanho(tamanho);
	setDieta(dieta);
	setIdFuncionario(funcionario);
	setNome_batismo(nome_B);
	setTotal_de_mudas(total_mudas);		 
	setUltima_muda(ultima_muda);
	setPais_origem(paisOrigem);
	setAutorizacao_ibama(autorizacaoIbama);
}


Anfibio_exotico::~Anfibio_exotico(){

}

ostream& operator<< (ostream &o, Anfibio_exotico &animal_){
	o << "*********Anfibio exotico**********" << endl
	  << "> ID animal........... " << animal_.getId_animal() << endl
	  << "> Classe.............. " << animal_.getClasse() << endl
	  << "> Nome cientifico..... " << animal_.getNome_cientifico() << endl
	  << "> Sexo................ " << animal_.getSexo() << endl
	  << "> Tamanho............. " << animal_.getTamnho() << endl
	  << "> Dieta............... " << animal_.getDieta() <<  endl
	  << "> ID funcionario...... " << animal_.getIdFuncionario() << endl
	  << "> Nome de batismo..... " << animal_.getNome_batismo() << endl
	  << "> Total de mudas...... " << animal_.getTotal_de_mudas() << endl
	  << "> Ultima muda......... " << animal_.getUltima_muda() << endl
	  << "> Pais de Origem...... " << animal_.getPais_origem() << endl
	  << "> Autorização IBAMA... " << animal_.getAutorizacao_ibama() << endl;
	return o;
}