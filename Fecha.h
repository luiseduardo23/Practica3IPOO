/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Age.h
* Descripción: Este archivo contiene las definiciones de la clase Fecha.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/

#ifndef FECHA_H
#define FECHA_H

#include "Dia.h"
#include "Mes.h"
#include "Age.h"

#include <string>
using std::string;

class Fecha{
	
	private:
		Dia * objDia;
		Mes * objMes;
		Age * objAge;
		
		
	public:
		Fecha(string nombreDiaIn, int numeroDiaIn, string nombreMesIn, int numeroMesIn, int numeroAgeIn, int sigloAgeIn,bool biciestoAgeIn);
		~Fecha();
		
		//Atributos de objetos la Fecha:
		
		//Dia
		string getNombreDia();
		int getNumeroDia();
		
		void setNombreDia(string nombreIn);
		void setNumeroDia(int numeroIn);	
		
		//Mes
		string getNombreMes();
		int getNumeroMes();
		
		void setNombreMes(string nombreIn);
		void setNumeroMes(int numeroIn);	
		
		//Age
		int getNumeroAge();
		int getSigloAge();
		bool getBiciestoAge();
		
		void setNumeroAge(int numeroIn);
		void setSigloAge(int sigloIn);
		void setBiciestoAge(bool biciestoIn);	
		
};


#endif
