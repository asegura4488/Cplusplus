#include <iostream>

using namespace std;

int main(){
  
  
  char letra;
  letra='o'; //Create a char variable
  
  char *pointer1=NULL; //Create a null pointer (the pointer and 'letra' must be the same type) 
  
  cout <<"First value o char variable: " << letra << endl; //look at the value
  
  pointer1=&letra;//Assginment of the pointer toward the memory position of the char 'letra'
  
  *pointer1='y';//Change of the value
  
  cout <<"Changed value of char variable: " << letra << endl;
  
  
  delete[] pointer1;
  pointer1=NULL;//Delete the pointer
  
  return 0;
} 
