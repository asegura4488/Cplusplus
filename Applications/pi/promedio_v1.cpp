
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

char*  sparam="";    // string parameter


int main(int argc,char *argv[])
{
  int optind=1;

  if(optind >= argc)
    {
      cout << "ERROR" << endl;
      exit (8);
    }
  while ((optind < argc) && (argv[optind][0]=='-')) {

    string sw = argv[optind];
    if (sw=="-s") {
      optind++;
      sparam = argv[optind];
    }
    
    else
      cout << "Unknown switch: "
       << argv[optind] << endl;

    optind++;
  }

  ifstream infile;

  infile.open(sparam);
  
  float pi_exp;
  float suma;
  int j = 0;
  
  float av;

  while(!infile.eof()){

    
    j++;
    
    infile  >> pi_exp;
    suma = suma + pi_exp;
  }

  suma = suma/(float)j;

  cout << suma << endl;
  
  
}

