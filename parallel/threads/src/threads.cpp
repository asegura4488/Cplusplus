#include <thread>
#include <iostream>
#include <fstream>

void function1(){
std::ofstream output ("salida.txt");
for (int i = 1; i <=50000000; i++){
    output << i << std::endl;
    }
output.close();
}

void function2(){
std::ofstream output ("salida2.txt");
for (int i = 1; i <=50000000; i++){
    output << i << std::endl;
    }
output.close();
}
int main(){
    std::thread first(function1);
    std::thread second(function2);
    first.join();
    second.join();

return 0;
}
