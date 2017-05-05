/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: Operativo.cpp
 *Descripción: Clase que implementa objeto Empleado Asistente Operativo
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */
 
#include "Operativo.h"

Operativo::Operativo(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn, string actividadIn):Asistente(nombreIn, edadIn, salarioIn, numSeccionIn, asociacionIn){
	actividad = actividadIn;
}

Operativo::~Operativo(){
	
}

string Operativo::getActividad(){
	return actividad;
}

void Operativo::setActividad(string actividadIn){
	actividad = actividadIn;
}
