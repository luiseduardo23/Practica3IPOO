/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: Asistente.cpp
 *Descripción: Clase que implementa objeto Empleado Asistente
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */
 
#include "Asistente.h"

Asistente::Asistente(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn):Empleado(nombreIn, edadIn, salarioIn){
	numSeccion = numSeccionIn;
	asociacion = asociacionIn;
}

Asistente::~Asistente(){
	
}

string Asistente::getNumSeccion(){
	return numSeccion;
}
string Asistente::getAsociacion(){
	return asociacion;
}

void Asistente::setNumSeccion(string numSeccionIn){
	numSeccion = numSeccionIn;
}
void Asistente::setAsociacion(string asociacionIn){
	asociacion = asociacionIn;
}
