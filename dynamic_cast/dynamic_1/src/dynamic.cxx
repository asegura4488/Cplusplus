/**************************

***Dynamic_cast in C++, First part
                         
---Ph. D. Alejandro Segura

**************************/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

//Mother class
class Persona {
	public: 
	Persona (const char *n) {strcpy(nombre, n);}
 	virtual void VerNombre() = 0; 
	protected:
	  char nombre[30];	
	~Persona();
};

//Daughter class _1
class Empleado : public Persona {
	public:
	Empleado(const char *n, float s) : Persona(n), sueldo(s) {}
	void VerNombre() {
	cout << "Empleado: " << nombre << endl;
	}	
	void VerSueldo() {
	cout << "Salario: " << sueldo <<endl; 
	}
	private:
	float sueldo;
};

class Estudiante : public Persona {

	public:
	Estudiante(const char *n) : Persona(n) {}
	void VerNombre(){
	   cout << "Estudiante: " << nombre << endl;
	}
};


//Dynamic implementation..

void VerSueldo(Persona *p) {
	if(Empleado *pEmp = dynamic_cast<Empleado *> (p))
	   pEmp->VerSueldo();
	else
	cout << "No tiene sueldo." << endl;
}

Persona::~Persona(){
}


int main(){

Persona *Pepa = new Estudiante("pepa");
Persona *Carlos = new Empleado("Carlos", 3000.);

Carlos->VerNombre();
VerSueldo(Carlos);

Pepa->VerNombre();
VerSueldo(Pepa);

return 0;
}
