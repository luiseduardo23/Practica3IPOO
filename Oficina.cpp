/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: Oficina.cpp
 *Descripción: Clase que implementa objeto Empleado Asistente de Oficina
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */
 
#include "Oficina.h"

Oficina::Oficina(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn, string nombreJefeIn, string laboresIn):Asistente(nombreIn, edadIn, salarioIn, numSeccionIn, asociacionIn){
	nombreJefe = nombreJefeIn;
	labores = laboresIn;
}

Oficina::~Oficina(){
	
}

string Oficina::getNombreJefe(){
	return nombreJefe;
}
string Oficina::getLabores(){
	return labores;
}

void Oficina::setNombreJefe(string nombreJefeIn){
	nombreJefe = nombreJefeIn;
}
void Oficina::setLabores(string laboresIn){
	labores = laboresIn;
}
