/**************************

***Structure in C++, First part
                         
---Ph. D. Alejandro Segura

**************************/
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main(){

	struct Personaje {
	//it's not possible to add initial value 
	int edad;
	double telefono;
	}Alejandro;
	Alejandro.edad = 29;
	Alejandro.telefono = 999.99999;

	cout << Alejandro.edad << endl;


return 0;
}
