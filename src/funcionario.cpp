#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "funcionario.h"

using namespace std;

void Funcionario::setId_funario(int id_f){
	id_funario = id_f;
}

void Funcionario::setNome_funcionario(string nome_f){
	nome_funcionario = nome_f;
}
void Funcionario::setCpf(string cpf_f){
	cpf = cpf_f;
}
void Funcionario::setIdade_funcionario(short idade_f){
	idade_funcionario = idade_f;
}
void Funcionario::setTipo_sanguineo(short tipo_s){
	tipo_sanguineo = tipo_s;
}
void Funcionario::setFator_rh(char RH){
	fator_rh = RH;
}
void Funcionario::setEspecialidade(string especialidade_f){
	especialidade = especialidade_f;
}

//getters
int Funcionario::getId_funario(){
	return id_funario;
}
		 
string Funcionario::getNome_funcionario(){
	return nome_funcionario;
}
string Funcionario::getCpf(){
	return cpf;
}
short Funcionario::getIdade_funcionario(){
	return idade_funcionario;
}
short Funcionario::getTipo_sanguineo(){
	return tipo_sanguineo;
}
char Funcionario::getFator_rh(){
	return fator_rh;
}
string Funcionario::getEspecialidade(){
	return especialidade;
}