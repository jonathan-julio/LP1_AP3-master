#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "funcionario.h"
#include "veterinario.h"

using namespace std;


void Veterinario::setCrmv(string crmv_a){
	crmv = crmv_a;
}
Veterinario::Veterinario(int id_funario,string nome_funcionario,string cpf,short idade_funcionario,short tipo_sanguineo,char fator_rh,string especialidade,string crmv_a){
	setId_funario(id_funario);		 
	setNome_funcionario(nome_funcionario);
	setCpf(cpf);
	setIdade_funcionario(idade_funcionario);
	setTipo_sanguineo(tipo_sanguineo);
	setFator_rh(fator_rh);
	setEspecialidade(especialidade);
	setCrmv(crmv_a);
}

//Veterinario::Veterinario(){
//	setId_funario(0);		 /
//	setNome_funcionario("");
//	setCpf("");
//	setIdade_funcionario(0);
//	setTipo_sanguineo(0);
//	setFator_rh(" ");
//	setEspecialidade();
//	setCrmv("");
//}