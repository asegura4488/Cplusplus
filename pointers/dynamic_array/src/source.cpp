#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
  
   //initializing the pointers
   string *name = NULL;
   int *age = NULL;

  int size;
  cout << "Insert the size of array: ";
  cin >> size ; 
  cout << endl;
 
  //statement of the array of size(size)  
  name = new string[size];
  age = new int[size];

  cout << "---------Insert the name and age-------" <<endl;

	for(int i=0; i<size; i++){
        cout << "Position: " << i+1 << endl;
	cout << "Name: ";
 	cin >> name[i];
	cout << "Age: ";
	cin >> age[i];
	}

  cout << endl;
  cout << "The list is: " << endl;

	for(int i=0; i<size; i++){
	cout << "Name:  " << name[i] << "  Age: " << age[i] << endl; 
 	} 

  //Delete the pointer
  delete[] name;
  name=NULL;
  delete[] age;
  age=NULL;     

  return 0;
} 
