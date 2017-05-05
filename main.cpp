/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: main.cpp
* Descripción: Este archivo contiene las funciones principales del codigo.
* Fecha de creación: 05/05/2017
* Fecha de modificación: 05/05/17
*/

#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

int main(int argc, char * argv[]){
	
	// se crean 3 objetos Fecha
	Fecha * fecha1 = new Fecha("lunes" , 1 , "mayo" , 5 , 2013 , 21 , 0);
    Fecha * fecha2 = new Fecha("martes" , 2 , "febrero" , 2 , 2016 , 21 , 1);
	Fecha * fecha3 = new Fecha("miercoles" , 3 , "julio" , 7 , 2020 , 21 , 1);	
	cout << endl;

    //Se muestran las 3 Fechas.
    cout << "********************************************************************" << endl; 

	cout << "Fecha1:" << endl;
	cout <<  fecha1->getNombreDia() << " ";
	cout <<  fecha1-> getNumeroDia() << " de ";
	cout <<  fecha1-> getNombreMes() << "("; 
	cout << fecha1->getNumeroMes() <<") "<< "del año ";
	cout << fecha1->getNumeroAge() << "(siglo ";
	cout << fecha1->getSigloAge() << "), ";
	
	if(fecha1->getBiciestoAge()==true){
		cout << " Año Biciesto. " << endl;
	}else{
		cout << " Año No Biciesto." << endl;
	}
	cout << endl;
	
    cout << "Fecha2:" << endl;
	cout <<  fecha2->getNombreDia() << " ";
	cout <<  fecha2-> getNumeroDia() << " de ";
	cout <<  fecha2-> getNombreMes() << "("; 
	cout << fecha2->getNumeroMes() <<") "<< "del año ";
	cout << fecha2->getNumeroAge() << "(siglo ";
	cout << fecha2->getSigloAge() << "), ";
	
	if(fecha2->getBiciestoAge()==true){
		cout << " Año Biciesto. " << endl;
	}else{
		cout << " Año No Biciesto." << endl;
	}
	cout << endl;
	
	cout << "Fecha3:" << endl;
	cout <<  fecha3->getNombreDia() << " ";
	cout <<  fecha3-> getNumeroDia() << " de ";
	cout <<  fecha3-> getNombreMes() << "("; 
	cout << fecha3->getNumeroMes() <<") "<< "del año ";
	cout << fecha3->getNumeroAge() << "(siglo ";
	cout << fecha3->getSigloAge() << "), ";
	
	if(fecha3->getBiciestoAge()==true){
		cout << " Año Biciesto. " << endl;
	}else{
		cout << " Año No Biciesto." << endl;
	}
	cout << endl;
	cout << "********************************************************************" << endl; 
	
	// se reaizan los cambios a 2 fechas:
	
	// A fecha 2 se le cambia el nombre del mes, numero de mes, año y el valor del biciesto.
	fecha2->setNombreMes("noviembre");	
	fecha2->setNumeroMes(2);	
	fecha2->setNumeroAge(2017);	 
	fecha2->setBiciestoAge(0);	
	
	//A fecha3 se le cambia el nombre del día, numero del dia y numero año.
	fecha3->setNombreDia("sabado");	
	fecha3->setNumeroDia(6);	
	fecha3->setNumeroAge(2024);	

	
	//Se imprimen las fechas modificadas  
	cout << "Fecha2 con datos modificados:" << endl;
	cout <<  fecha2->getNombreDia() << " ";
	cout <<  fecha2-> getNumeroDia() << " de ";
	cout <<  fecha2-> getNombreMes() << "("; 
	cout << fecha2->getNumeroMes() <<") "<< "del año ";
	cout << fecha2->getNumeroAge() << "(siglo ";
	cout << fecha2->getSigloAge() << "), ";
	
	if(fecha2->getBiciestoAge()==true){
		cout << " Año Biciesto. " << endl;
	}else{
		cout << " Año No Biciesto." << endl;
	}
	cout << endl;
	
	cout << "Fecha3 con datos modificados:" << endl;
	cout <<  fecha3->getNombreDia() << " ";
	cout <<  fecha3-> getNumeroDia() << " de ";
	cout <<  fecha3-> getNombreMes() << "("; 
	cout << fecha3->getNumeroMes() <<") "<< "del año ";
	cout << fecha3->getNumeroAge() << "(siglo ";
	cout << fecha3->getSigloAge() << "), ";
	
	if(fecha3->getBiciestoAge()==true){
		cout << " Año Biciesto. " << endl;
	}else{
		cout << " Año No Biciesto." << endl;
	}
	cout << endl; 
	cout << "********************************************************************" << endl;  
	
	
	// y ya :v.
}
