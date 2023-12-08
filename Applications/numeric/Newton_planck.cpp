#include "math.h"
#include "stdio.h"
#include "iostream"
double f(double x);
double g(double x);

int main(double x)
{
 using namespace std;
  
 double e,y;
 x=4;
do
   {
     y=x; 
     x=x-(f(x)/g(x));
     e=((x-y)/x);
     if(e<0){e=-e;}
     else{e=e;}
}while(e>=0.000000001); 

 cout << "La Raiz de la ecuacion es: "<< x <<endl;
} 

double f(double x)
{
  double f=5*exp(-x)+x-5;
  return(f);
}


double g(double x)
{
  double g=-5*exp(-x)+1;
  return(g);
}
