/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: Ejecutivo.cpp
 *Descripción: Clase que implementa objeto Empleado Ejecutivo
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */
 
#include "Ejecutivo.h"

Ejecutivo::Ejecutivo(string nombreIn, int edadIn, int salarioIn, int numEmpleadosIn, int numOficinaIn):Empleado(nombreIn, edadIn, salarioIn){
	numEmpleados = numEmpleadosIn;
	numOficina = numOficinaIn;
}

Ejecutivo::~Ejecutivo(){
	
}

int Ejecutivo::getNumEmpleados(){
	return numEmpleados;
}
int Ejecutivo::getNumOficina(){
	return numOficina;
}

void Ejecutivo::setNumEmpleados(int numEmpleadosIn){
	numEmpleados = numEmpleadosIn;
}
void Ejecutivo::setNumOficina(int numOficinaIn){
	numOficina = numOficinaIn;
}
