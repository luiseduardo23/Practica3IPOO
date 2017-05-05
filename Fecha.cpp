/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Fecha.cpp
* Descripción: Este archivo contiene el cuerpo de la clase Fecha.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/

#include "Fecha.h"

Fecha::Fecha(string nombreDiaIn, int numeroDiaIn, string nombreMesIn, int numeroMesIn, int numeroAgeIn, int sigloAgeIn, bool biciestoAgeIn){

//creamos os objetos de la fecha:
		objDia = new Dia(nombreDiaIn, numeroDiaIn);
		objMes = new Mes(nombreMesIn, numeroMesIn);
		objAge = new Age(numeroAgeIn, sigloAgeIn, biciestoAgeIn);
}
		
Fecha::~Fecha(){
      delete objDia;
      delete objMes;
      delete objAge;
}

//Dia
string Fecha::getNombreDia(){
	return objDia->getNombre();
}
int    Fecha::getNumeroDia(){
	return objDia->getNumero();
}
	
		
void Fecha::setNombreDia(string nombreIn){
	objDia-> setNombre(nombreIn);
}
void Fecha::setNumeroDia(int numeroIn){
	objDia-> setNumero(numeroIn);
}	
		
//Mes
string Fecha::getNombreMes(){
	return objMes->getNombre();
}
int    Fecha::getNumeroMes(){
	return objMes->getNumero();
}
		
		
void Fecha::setNombreMes(string nombreIn){
	objMes->setNombre(nombreIn);
}
void Fecha::setNumeroMes(int numeroIn){
	objMes->setNumero(numeroIn);
}
		
//Age
int Fecha::getNumeroAge(){
	return objAge->getNumero();
}
int Fecha::getSigloAge(){
	return objAge->getSiglo();
}
bool Fecha::getBiciestoAge(){
	return objAge->getBiciesto();
}

	
void Fecha::setNumeroAge(int numeroIn){
	objAge->setNumero(numeroIn);	
}
void Fecha::setSigloAge(int sigloIn){
	objAge->setSiglo(sigloIn);	
}
void Fecha::setBiciestoAge(bool biciestoIn){
	objAge->setBiciesto(biciestoIn);	
}
