/*
 * Archivo de cabecera clase Empleado Asistente
 */
 
#ifndef ASISTENTE_H
#define ASISTENTE_H
#include "Empleado.h"
 
#include <string>
using std::string; 
  
class Asistente: public Empleado{

	protected:
		string numSeccion;
		string asociacion;
	
	public:
		Asistente(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn);
		~Asistente();
		
		string getNumSeccion();
		string getAsociacion();
		
		void setNumSeccion(string numSeccionIn);
		void setAsociacion(string asociacionIn);
	 
};
#endif


