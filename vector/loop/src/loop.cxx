/**************************

***Erasing elements from a vector

---Ph. D. Alejandro Segura

**************************/
#include <iostream>
#include <vector>


int main(){

std::vector<int> vec1;

//Filling the vector
	for(int i=1; i<=10; i++){
	vec1.push_back(i);
	} 
//Show the vector information
std::cout << "The elements of vector are: " << std::endl;

	for(int i=0; i<vec1.size(); i++){
	std::cout << vec1[i] << std::endl;
	} 

//Show the vector information
std::cout << "Taking out the first one and the fifth: " << std::endl;
vec1.erase(vec1.begin());
vec1.erase(vec1.begin()+3);

	for(int i=0; i<vec1.size(); i++){
        std::cout << vec1[i] << std::endl;
        }

return 0;
}
