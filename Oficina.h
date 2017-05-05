/*
 * Archivo de cabecera clase Empleado Asistente de Oficina
 */
 
#ifndef OFICINA_H
#define OFICINA_H
#include "Asistente.h"
 
#include <string>
using std::string; 
  
class Oficina: public Asistente{

	private:
		string nombreJefe;
		string labores;
	
	public:
		Oficina(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn, string nombreJefeIn, string laboresIn);
		~Oficina();
		
		string getNombreJefe();
		string getLabores();
		
		void setNombreJefe(string nombreJefeIn);
		void setLabores(string laboresIn);
	 
};
#endif


