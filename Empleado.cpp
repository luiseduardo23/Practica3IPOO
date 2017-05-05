/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: Empleado.cpp
 *Descripción: Clase que implementa objeto Empleado
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */
 
#include "Empleado.h"


Empleado::Empleado(string nombreIn, int edadIn, int salarioIn){
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
}
Empleado::~Empleado(){
	
}

string Empleado::getNombre(){
	return nombre;
}

int Empleado::getEdad(){
	return edad;
}

int Empleado::getSalario(){
	return salario;
}


void Empleado::setNombre(string nombreIn){
	nombre = nombreIn;
}

void Empleado::setEdad(int edadIn){
	edad = edadIn;
}

void Empleado::setSalario(int salarioIn){
	salario = salarioIn;
}
