#include <iostream>
using namespace std;


template <class T>

void output (const T & n){

cout << n << endl;
}

int main(){

output(10);
output(10.63);
output("Muon");
return 0;
}
