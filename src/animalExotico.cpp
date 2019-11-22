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
#include "animalExotico.h"

using namespace std;

string Animal_exotico::getPais_origem(){
	return pais_origem;
}
void Animal_exotico::setPais_origem(string paisOrigem){
	pais_origem = paisOrigem;
}