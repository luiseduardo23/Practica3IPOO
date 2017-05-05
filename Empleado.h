/*
 * Archivo de cabecera clase Empleado
 */
 
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
using std::string; 
  
class Empleado{

	
	protected:
		string nombre;
		int edad;
		int salario;
	
	public:
		Empleado(string nombreIn, int edadIn, int salarioIn);
		~Empleado();
		
		string getNombre();
		int getEdad();
		int getSalario();
		
		void setNombre(string nombreIn);
		void setEdad(int edadIn);
		void setSalario(int salarioIn);
	 
};
#endif
