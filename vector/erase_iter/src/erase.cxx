/**************************

***Erasing elements from a vector
                         (int vector)
---Ph. D. Alejandro Segura

**************************/
#include <iostream>
#include <vector>
#include <typeinfo>


int main(){

std::vector<int> vec1;

//Filling the vector
	for(int i=1; i<=10; i++){
	vec1.push_back(i);
	} 
//Show the vector information
std::cout << "The elements of vector are: " << std::endl;


//last method using a conventional for loop
	for(int i=0; i<vec1.size(); i++){
	std::cout << vec1[i] << std::endl;
	} 
//Using vector iter
	for(std::vector<int>::iterator it = vec1.begin() ; it != vec1.end(); ++it){
        std::cout << ' ' << *it << std::endl;
	}

//Show the vector information
std::cout << "Taking out the first one and the fifth: " << std::endl;

std::vector<int>::iterator it = vec1.begin();
vec1.erase(it);
it = vec1.begin()+3;
vec1.erase(it);

//vec1.erase(vec1.begin());
//vec1.erase(vec1.begin()+3);

	for(int i=0; i<vec1.size(); i++){
        std::cout << vec1[i] << std::endl;
        }

std::cout << "Inerting the value 200 in the 6 position: " << std::endl;

it = vec1.begin()+5;
vec1.insert(it, 200);

        for (auto& iter : vec1){
	std::cout << iter << std::endl; 
	}

/*
	for(std::vector<int>::iterator it = vec1.begin() ; it != vec1.end(); ++it){
        std::cout << ' ' << *it << std::endl;
	}
*/
return 0;
}
