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
#include "animalNativo.h"

using namespace std;

string uf_origem;
        string autorizacao;

string Animal_nativo::getUf_origem(){
	return uf_origem;
}
string Animal_nativo::getAutorizacao(){
	return autorizacao;
}

void Animal_nativo::setUf_origem(string ufOrigem){
	uf_origem = uf_origem;
}
void Animal_nativo::setAutorizacao(string autorizacao_){
	autorizacao = autorizacao_;
}