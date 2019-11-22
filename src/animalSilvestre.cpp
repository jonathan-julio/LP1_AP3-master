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
#include "animalSilvestre.h"

using namespace std;

string Animal_silvestre::getAutorizacao_ibama(){
	return autorizacao_ibama;
}
        
void Animal_silvestre::setAutorizacao_ibama(string autorizacaoIbama){
	autorizacao_ibama = autorizacaoIbama;
}