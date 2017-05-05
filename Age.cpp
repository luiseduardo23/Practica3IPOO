/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Age.cpp
* Descripción: Este archivo contiene el cuerpo de la clase Age.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/
 
#include "Age.h"
 
Age::Age( int numeroIn, int sigloIn, bool biciestoIn){
	numero = numeroIn;
	siglo = sigloIn;
	biciesto = biciestoIn;
}
Age::~Age(){
}


int Age::getNumero(){
	return numero;
}
int Age::getSiglo(){
	return siglo;
}
bool Age::getBiciesto(){
	return biciesto;
}



void Age::setNumero(int numeroIn){
	numero = numeroIn;
}
void Age::setSiglo(int sigloIn){
	siglo = sigloIn;
}
void Age::setBiciesto(bool biciestoIn){
	biciesto = biciestoIn;
}

