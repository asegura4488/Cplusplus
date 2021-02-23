//Programa para estudiar el movimiento de caida libre
#include<math.h>
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

using namespace std;


int main()
{
  // Declaracion de variables
  int i;
  int R;// radio
  double x;
  double A ;//area transversal
  double r;// parametro de amortiguamiento
  double m;//masa del objeto
  double C;//constante
  double p;// densidad rho
  double y;
  double y0;
  double y_ant;
  double v0;
  double t;
  double g;
  double DeltaT;

 // double v1;  //Metodo1: velocidad a partir de v1 = v0 -gt
  double v2;  //Metodo2: velocidad a partir de (y2-y1)/(t2-t1)

  FILE *Salida;
  char ArchSalida[] = "Datoscaidalibre.dat";
  Salida = fopen(ArchSalida, "w");

  //Condiciones iniciales
  //y0 = 400;
  //y = 400;
  //v0 = 0;
  g = 9.78;
  //t = 0.0;
  DeltaT = 0.1;

R=0.1;
A= 4*3.1416*pow(0.1,2);
p=1.0;
C=0.5;

  cout << "Ingrese el valor inicial de y0: " << endl;
  cin >> y0;
  cout << "Ingrese el valor inicial de v0: " << endl;
  cin >> v0;
  cout <<"Ingrese el valor de m:" << endl;
  cin >> m;
  cout << "Ingrese el valor de t: " << endl;
  cin >> t;

  r = sqrt((C*p*A)/(2*m*g));

  y = y0 + (1/(pow(r,2)*g))*log((sqrt(1+pow((r*v0),2)))/(cosh(r*g*(t*0.1))));
  cout << "La posicion de y es:" << y << endl;


  y = y0;
 
  //Loop sobre el tiempo
    for(i = 0; i < 1000; i++)
    {
      y_ant = y;
 
      t = i * DeltaT;  //intervalos de tiempo
      //t = t + DeltaT;

      y = y0 + (1/(pow(r,2)*g))*log((sqrt(1+pow((r*v0),2)))/(cosh(r*g*t)));  //posicion en y como funcion de t


      //v1 = v0 - g*t;  //velocidad metodo1

      v2 = (y-y_ant)/(DeltaT); //velocidad metodo2

      if(y < 0.0) // si la esfera llega al piso
	return -1;

//    if( (int(100*t) % 100) == 0.0)
//    printf("%4.3f %4.4f\n", t, y);

     fprintf(Salida, "%4.7f %4.7f %4.7f\n", t, y, v2);
    } // cierra el  ciclo  for

 

  return 0;
} // cierra el main
