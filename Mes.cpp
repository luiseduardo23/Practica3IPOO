/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Mes.cpp
* Descripción: Este archivo contiene el cuerpo de la clase Mes.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/
 
#include "Mes.h"
 
Mes::Mes(string nombreIn, int numeroIn){
	nombre = nombreIn;
	numero = numeroIn;
}
Mes::~Mes(){
}


string Mes::getNombre(){
	return nombre;
}
int Mes::getNumero(){
	return numero;
}


void Mes::setNombre(string nombreIn){
	nombre = nombreIn;
}
void Mes::setNumero(int numeroIn){
	numero = numeroIn;
}

