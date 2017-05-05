/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Dia.cpp
* Descripción: Este archivo contiene el cuerpo de la clase Día.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/
 
#include "Dia.h"
 
Dia::Dia(string nombreIn, int numeroIn){
	nombre = nombreIn;
	numero = numeroIn;
}
Dia::~Dia(){
}


string Dia::getNombre(){
	return nombre;
}
int Dia::getNumero(){
	return numero;
}


void Dia::setNombre(string nombreIn){
	nombre = nombreIn;
}
void Dia::setNumero(int numeroIn){
	numero = numeroIn;
}


