#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "animal.h"
#include "ave.h"

using namespace std;

void Ave::setTamanho_do_bico_cm(double tamanhoBico){
    tamanho_do_bico_cm = tamanhoBico;
}

void Ave::setEnvergadura_das_asas(double envergaduraAsas){
    envergadura_das_asas = envergaduraAsas;
}

double Ave::getTamanho_do_bico_cm(){
    return tamanho_do_bico_cm;
}

double Ave::getEnvergadura_das_asas(){
    return envergadura_das_asas;
}
		 
	