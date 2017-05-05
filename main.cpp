/*
 *Autor: Jorge Augusto Estacio
 * 		 Juan Camilo Patiño
 * 		 Luis Eduardo Henao
 *Archivo: main.cpp
 *Descripción: Achivo principal del programa
 *Fecha: 05/05/17
 *Fecha modificación: 05/05/17
 */

#include <iostream>
#include <string>
#include "Empleado.h"
#include "Ejecutivo.h"
#include "Oficina.h"
#include "Operativo.h"
using namespace std;

int main(int argc, char * argv[]){

	Ejecutivo * empleado1 = new Ejecutivo("Juan", 30, 1000000, 100, 302);
	Ejecutivo * empleado2 = new Ejecutivo("Pedro", 60, 1500000, 200, 102);
	Oficina * empleado3 = new Oficina("Alberta", 40, 10000, "2A", "SintraStark", "Pedro", "Realiza la contabilidad de su sección");
	Operativo * empleado4 = new Operativo("Carlos", 20, 50000, "4F", "SintraStark", "Realiza el aseo de la seccion 4F");

	cout << "Nombre: " << empleado1->getNombre()
		<< "\nEdad: " << empleado1->getEdad()
		<< "\nSalario: " << empleado1->getSalario() 
		<< "\nEmpleados: " << empleado1->getNumEmpleados()
		<< "\nOficina: " << empleado1->getNumOficina() << endl;
	 
	cout << "\nNombre: " << empleado2->getNombre() 
		<< "\nEdad: " << empleado2->getEdad() 
		<< "\nSalario: " << empleado2->getSalario() 
		<< "\nEmpleados: " << empleado2->getNumEmpleados()
		<< "\nOficina: " << empleado2->getNumOficina() << endl;

	cout << "\nNombre: " << empleado3->getNombre() 
		<< "\nEdad: " << empleado3->getEdad() 
		<< "\nSalario: " << empleado3->getSalario() 
		<< "\nSección: " << empleado3->getNumSeccion()
		<< "\nAsociacion: " << empleado3->getAsociacion()
		<< "\nJefe: " << empleado3->getNombreJefe()
		<< "\nLabor: " << empleado3->getLabores() << endl;

	cout << "\nNombre: " << empleado4->getNombre() 
		<< "\nEdad: " << empleado4->getEdad() 
		<< "\nSalario: " << empleado4->getSalario() 
		<< "\nSección: " << empleado4->getNumSeccion()
		<< "\nAsociacion: " << empleado4->getAsociacion()
		<< "\nLabor: " << empleado4->getActividad() << endl;
}
