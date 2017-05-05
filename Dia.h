/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Dia.h
* Descripción: Este archivo contiene las definiciones de la clase Día.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/

#ifndef DIA_H
#define DIA_H

#include <string>
using std::string;

/*
 * A continuación se define la clase Dia
 */
 
class Dia{
	
	private:
		string nombre;
		int numero;
		
	public:
		Dia(string nombreIn, int numeroIn);
		~Dia();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);	
};

#endif
