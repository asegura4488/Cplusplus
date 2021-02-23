#include <iostream>
#include <stdio.h>

using namespace std;

int funcion(int valor){
  valor = valor + 14;
  return valor;
}

int funcionpuntero(int* valor){
  *valor = *valor + 14;
  return *valor;
}

int main(){
  
  int numero = 10;
  cout << "Before of the Function "<< numero << endl;
  
  funcion(numero);
  
  cout << "After of the Function " << numero << endl; 
  
  cout << "Before of the pointer function " << numero << endl;
  
  funcionpuntero(&numero); 
  
  cout << "After of the pointer function " << numero << endl;
  
  
  return 0;
  
  
} 
