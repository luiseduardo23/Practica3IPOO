/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Age.h
* Descripción: Este archivo contiene las definiciones de la clase Age.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/

#ifndef AGE_H
#define AGE_H

#include <string>
using std::string;

/*
 * A continuación se define la clase Age
 */
 
class Age{
	
	private:
		int numero;
		int siglo;
		bool biciesto;
		
	public:
		Age(int numeroIn, int sigloIn, bool biciestoIn);
		~Age();
		
		int getNumero();
		int getSiglo();
		bool getBiciesto();
		
		
		void setNumero(int nombreIn);
		void setSiglo(int numeroIn);
		void setBiciesto(bool biciestoIn);	
};

#endif
