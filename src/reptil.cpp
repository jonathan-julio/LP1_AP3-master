#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "animal.h"
#include "reptil.h"

using namespace std;

void Reptil::setVenenoso(bool ven){
	venenoso = ven;
}

void Reptil::setTipo_veneno(string tipoVeneno){
	tipo_veneno = tipoVeneno;
}		 

bool Reptil::getVenenoso(){
	
	return venenoso;
}

string Reptil::getTipo_veneno(){
	return tipo_veneno;
}
	

