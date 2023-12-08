#include <iostream>

void formula( double &raiz );

int main(int argc, char *argv[]){

	std::cout.setf(std::ios::scientific);
	std::cout.precision(20); // 15 cifra de precision
	
	int n = std::atoi(argv[1]);

	double raiz = 0.1;

	for(int i=1; i<=n; i++){
	        std::cout << raiz << std::endl;	
		formula(raiz);
	}
	
	std::cout << " Final: " << raiz << std::endl;

}

void formula( double &raiz ){
	raiz = (raiz + 2/raiz)/2;
}
