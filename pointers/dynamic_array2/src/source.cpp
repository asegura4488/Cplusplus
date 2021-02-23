#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
  
   //initializing the pointers
   //Columns

   string** list = NULL;
   int columns = 2;

  int size;
  cout << "Insert the size of array: ";
  cin >> size ; 
  cout << endl;
 
  //statement of the array of size(size)  
  //Double pointer
  list = new string*[size];
  string name, age;

  cout << "---------Insert the name and age-------" <<endl;

	for(int i=0; i<size; i++){
	list[i] = new string[columns]; 
        cout << "Position: " << i+1 << endl;
	cout << "Name: ";
 	cin >> name;
	cout << "Age: ";
	cin >> age;
 	//List assignment
	list[i][0] = name;
	list[i][1] = age;
	}

  cout << endl;
  cout << "The list is: " << endl;

	for(int i=0; i<size; i++){
	cout << "Name:  " << list[i][0] << "Age: " << list[i][1]  << endl; 
 	} 

  //Delete the pointer, raw by raw (so important)

  cout << endl;
  for(int i=0; i<size; i++){
  cout << "Deleting raw: " << i+1 << endl;
  delete[] list[i];  
  }

  //Delete the pointer, columns
  delete[] list;
  list=NULL;

  return 0;
} 
