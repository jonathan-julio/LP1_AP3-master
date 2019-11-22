#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "animal.h"
#include "mamifero.h"

using namespace std;

void Mamifero::setCor_pelo(string corPelo){
	cor_pelo = corPelo;
}

string Mamifero::getCor_pelo(){
	return cor_pelo;
}		 

