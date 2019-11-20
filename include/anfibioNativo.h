#define _GLIBCXX_USE_CXX11_ABI 0
#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iterator>
#include <algorithm>



using namespace std;

class Anfibio_nativo:public Anfibio{

	public: 		
		Anfibio_nativo();
		Anfibio_nativo(int id,string classe,string nome_c,char sexo,double tamanho, string dieta, int funcionario,  string nome_B, int total_mudas, string ultima_muda);
		~Anfibio_nativo();
};


#endif // ANFIBIONATIVO_H