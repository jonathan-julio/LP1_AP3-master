#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

#include "gerenciar.h"
#include "animal.h"

using namespace std;



void Animal::setId_animal(int id_a){
	id_animal = id_a;
}

void Animal::setClasse(string classe_a){
	classe = classe_a;
}

void Animal::setNome_cientifico(string nome_c){
	nome_cientifico = nome_c;
}
void Animal::setSexo(char s){
	sexo = s;
}
void Animal::setTamanho(double tamanho_a){
	tamanho = tamanho_a;
}
void Animal::setDieta(string dieta_a){
	dieta = dieta_a;
}
void Animal::setIdFuncionario(int id_f){
	idFuncionario = id_f;
}
void Animal::setNome_batismo(string nome_b){
	nome_batismo = nome_b;
}


//getters********************************************

int Animal::getId_animal(){
	return id_animal;
}
string Animal::getClasse(){
	return classe;
}
string Animal::getNome_cientifico(){
	return nome_cientifico;
}
char Animal::getSexo(){
	return sexo;
}
double Animal::getTamnho(){
	return tamanho;
}
string Animal::getDieta(){
	return dieta;
}
int Animal::getIdFuncionario(){
	return idFuncionario;
}
string Animal::getNome_batismo(){
	return nome_batismo;
}