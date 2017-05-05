/*
 * Archivo de cabecera clase Empleado Ejecutivo
 */
 
#ifndef EJECUTIVO_H
#define EJECUTIVO_H
#include "Empleado.h"
 
#include <string>
using std::string; 
  
class Ejecutivo: public Empleado{

	private:
		int numEmpleados;
		int numOficina;
	
	public:
		Ejecutivo(string nombreIn, int edadIn, int salarioIn, int numEmpleadosIn, int numOficinaIn);
		~Ejecutivo();
		
		int getNumEmpleados();
		int getNumOficina();
		
		void setNumEmpleados(int numEmpleadosIn);
		void setNumOficina(int numOficinaIn);
	 
};
#endif


