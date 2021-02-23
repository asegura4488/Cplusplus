#include<iostream>
#include<string>

using namespace std;


int main(){
  
  string b="";
  //first
  //cin >> b;
  //Whole Line
  getline(cin, b);
  
  
  //string as a vector
  //string b = "Alejandro";
  
  int index = 2;
  
  cout << "El " << index+1 << " elemento es: " << b.at(index) << endl; 
  
  
  for (int i = 0; i < b.length(); i++)
    {
      cout << b.at(i) << endl;
    }

  cout << "///////////////////" << endl;
  //assignation
  string c;
  //c=b;
  c.assign(b);


  cout << c << endl;

  cout << "///////////////////" << endl;

  string d("las cosas de la vida no son como yo pensaba ");
  string e = d.substr(5, 10); //first character in the sub-string and the number of neighbors
  cout << d << " Elements from 5 until 15  "<< e<< endl;


  //swap the string values
  d.swap(e);

  cout << d << "---- swan string values---- " << e << endl;

  //Finding string

  cout << b.find("ma") << endl; //left to right
  cout << b.rfind("ma") << endl; //right to left

  //Erase, inserting and replace
  string name = "Manuel Alejandro Segura Delgado";
  cout << name << endl; 
  name.erase(6);
  cout << name << endl; 
  
  name.insert(6 , " Alejandro Segura Delgado");
  cout << name << endl; 
    
  name.replace(7, 9, "Santiago");
  cout << name << endl; 
  
  
  return 0;
}
