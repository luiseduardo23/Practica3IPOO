/*
 * Archivo de cabecera clase Empleado Asistente Operativo
 */
 
#ifndef OPERATIVO_H
#define OPERATIVO_H
#include "Asistente.h"
 
#include <string>
using std::string; 
  
class Operativo: public Asistente{

	private:
		string actividad;
	
	public:
		Operativo(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asociacionIn, string actividadIn);
		~Operativo();
		
		string getActividad();
		
		void setActividad(string actividadIn);
	 
};
#endif


