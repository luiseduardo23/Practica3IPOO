/* 
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Mes.h
* Descripción: Este archivo contiene las definiciones de la clase Mes.
* Fecha de creación: 04/05/2017
* Fecha de modificación: 04/05/17
*/

#ifndef MES_H
#define MES_H

#include <string>
using std::string;

/*
 * A continuación se define la clase Mes
 */
 
class Mes{
	
	private:
		string nombre;
		int numero;
		
	public:
		Mes(string nombreIn, int numeroIn);
		~Mes();
		
		string getNombre();
		int getNumero();
		
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);	
};

#endif
