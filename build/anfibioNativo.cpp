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
#include "anfibioNativo.h"

using namespace std;

Anfibio_nativo::Anfibio_nativo(){
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
	//++numeroCarros;
}

Anfibio_nativo::Anfibio_nativo(int id_a,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, int total_mudas, string ultima_muda){
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
}


Anfibio_nativo::~Anfibio_nativo(){

}

ostream& operator<< (ostream &o, Anfibio_nativo &animal_){
	o << "*********Anfibio nativo**********" << endl
	  << "> ID animal........... " << animal_.getId_animal() << endl
	  << "> Classe.............. " << animal_.getClasse() << endl
	  << "> Nome cientifico..... " << animal_.getNome_cientifico() << endl
	  << "> Sexo................ " << animal_.getSexo() << endl
	  << "> Tamanho............. " << animal_.getTamnho() << endl
	  << "> Dieta............... " << animal_.getDieta() <<  endl
	  << "> ID funcionario...... " << animal_.getIdFuncionario() << endl
	  << "> Nome de batismo..... " << animal_.getNome_batismo() << endl
	  << "> Total de mudas...... " << animal_.getTotal_de_mudas() << endl
	  << "> Ultima muda......... " << animal_.getUltima_muda() << endl;
	return o;
}