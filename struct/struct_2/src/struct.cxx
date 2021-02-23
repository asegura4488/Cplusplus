/**************************

***Structure in C++, Second part
                         
---Ph. D. Alejandro Segura

**************************/
#include <iostream>
#include <vector>
#include <typeinfo>
#include <stdio.h>
#include <string.h>

using namespace std;

	struct Amigos {
	//it's not possible to add the initial value 
	int edad;
	char sexo[2];
		//Functions
		Amigos(){edad = 15; strcpy(sexo, "M");}
		//function to show 
		int seeage(){return edad;}
		int saveage(int a){edad = a;} 
	}Alejandro, Sofia, Marcela;

int main(){

	Alejandro.edad = 29;
	strcpy(Alejandro.sexo, "M");  	
	Sofia = Alejandro;
        strcpy(Sofia.sexo , "F");
	cout << "Edad de Alejandro " << Alejandro.edad << endl;
	cout << "Edad de Sofia " << Sofia.edad << endl;
	cout << "Sexo de Alejandro " << Alejandro.sexo << endl;
	cout << "Sexo de Sofia " << Sofia.sexo << endl;
	cout << "Marcela es cargada con el valor inicial del constructor " << Marcela.edad << endl;
	//Using the functions
	cout << "Cambiando el valor de la edad de Alejandro" << endl;
	Alejandro.saveage(56);
	cout << Alejandro.seeage() << endl;

return 0;
}
