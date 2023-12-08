#include <iostream>

int main(){

    std::cout << " Hola " << std::endl;

    for(int i=0; i<100; i++) 
    std::cout << i << std::endl;

    std::cin.ignore();
    std::cin.get();
    return 0;
}