// Compile using g++ bessel.cpp -std=c++17 -Wall
// This program requires the maximum N, the degree of the bessel function and the output file name

#include <iostream> // incluye utilidades para imprimir y leer de pantalla
#include <cmath> // incluye funciones matematicas
#include <cstdlib> // for atoi, atof
#include <string> // for strings
#include <fstream> // to read or write files

// function declaration
void Bessel(int N, int degree, const std::string & filename); // what is the meaning of &?

int main(int argc, char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  const int nmax = std::atoi(argv[1]);
  const int degree = std::atoi(argv[2]);
  const std::string fname = argv[3];

  // It requires a protection for the input
  Bessel(nmax, degree, fname);
  return 0;
}

// function implementation
void Bessel(int N, int degree, const std::string & filename)
{


  std::ofstream fout;
  fout.open(filename);
  fout.setf(std::ios::scientific);
  fout.precision(15);
    
  double x = 0.;
  
  for(int n = 1; n <= N ; n = n+1) {
        fout << x << " ";
        // fill for all each degree of the bessel functions
        for(int i = 0; i <=degree; i++)
        	fout << std::cyl_bessel_j(i, x) << " ";
        fout << std::endl;
        
        x += 0.05;
  }
  
  fout.close();
}
