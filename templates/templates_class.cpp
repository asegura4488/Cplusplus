#include <iostream>

using namespace std;

template <class T>

class A {
 public:
  A( const T & init);
  A (const T & a, const T & b) ;
  void output();
  T bigger();
 private:
  T data;
  T data1;
  T data2;
};

template<class T>
A<T>::A(const T & init){
    data = init;
}
template<class T>
A<T>::A(const T & a, const T & b){
data1 = a;
data2 = b;
}
template<class T>
void A<T>::output(){
cout << data << endl;
}
template<class T>
T A<T>::bigger(){
return (data1>data2?data1:data2);
}

int main(){
 A <int> intinstance(10); // A <type of data>
 A <string> charinstance("Alejandro");
 A <float> floatinstance(2.7815);

 A <float> f(6.33,4.69);

  intinstance.output();
  charinstance.output();
  floatinstance.output();
 
  cout << f.bigger() << endl;

return 0;
}

