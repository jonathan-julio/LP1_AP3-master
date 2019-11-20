#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "animal.h"
#include "anfibio.h"

using namespace std;

void Anfibio::setTotal_de_mudas(int totalMudas){
	total_de_mudas = totalMudas;
}

void Anfibio::setUltima_muda(string ultimaMuda){
	ultima_muda = ultimaMuda;
}
