#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()

{
  ifstream infile;
  infile.open("log.data");

  float dat1, dat3;
  float dat2=0;    // cambiar por nombre alucivos a 
                   //lo que estamos haciendo i.e., dat3 -> prom
  int n=0;

  while(!infile.eof())

    {
      n++;
      infile >> dat1;
      dat2+=dat1;
    
 }

  dat3=dat2/(float(n));

  cout <<"El promedio del numero pi "<< dat3 <<endl;


}
