//Programa para estudiar la precesiondel perihelio de Mercurio

#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

#define pi 3.141592654

using namespace std;


int main()
{
  //Archivo de salida
  FILE *Salida;
  char ArchSalida[] = "PrecesionMercurio .dat";
  Salida = fopen(ArchSalida, "w");

  // Declaracion de variables
  int i;   
   
  //Tiempo
  double t = 0.0;
  double dt = 0.00000001; //Orden de 10-8
  //double dt = 0.01; 
  
  //Posicion, velocidad y aceleracion
  double r = 0.0, rn = 0.0, rn2 = 0.0;
  double x = 0.0, xn = 0.0, xn2 = 0.0;
  double y = 0.0, yn = 0.0, yn2 = 0.0;
  double a_x = 0.0, an_x = 0.0, an2_x = 0.0;
  double a_y = 0.0, an_y = 0.0, an2_y = 0.0;
  double v_x = 0.0, vn_x = 0.0, vn2_x = 0.0;  
  double v_y = 0.0, vn_y = 0.0, vn2_y = 0.0;  

  //Constantes
  double alpha = 1.1e-8;  //Orden de 10-8
  double a = 0.39; //Mercurio
  //double a = 19.182; //Urano
  double eps = 0.206; //Mercurio
  //double eps = 0.047; //Urano
  double theta = 0.0;

  //numero de rotaciones
  int n = 0;
  int NR = 10;
  
  //Condiciones iniciales
  x = a*(1.0 + eps);
  v_y = sqrt(4*pi*pi*(1.0-eps)/(a*(1.0+eps)));  
  //y = 0.0;
  //v_x = 0.0;
  
  
  //Loop sobre el tiempo
  for(i = 1; i < 1000000000; i++)
    {
      //instante i
      r = sqrt(x*x + y*y); //posicion
      a_x = -4.0*pi*pi*x*(1.0+(alpha/(r*r))) / (r*r*r);  //aceleracion x
      a_y = -4.0*pi*pi*y*(1.0+(alpha/(r*r))) / (r*r*r);  //aceleracion y
     
      //instante i+1
      t = i*dt; //tiempo
      xn = x + (v_x * dt) + 0.5*a_x*dt*dt;  // nuevo x
      yn = y + (v_y * dt) + 0.5*a_y*dt*dt;  // nuevo y
      rn = sqrt(xn*xn + yn*yn);  //nueva posicion
      an_x = -4.0*pi*pi*xn*(1.0+(alpha/(rn*rn))) / (rn*rn*rn);  //nueva aceleracion x
      an_y = -4.0*pi*pi*yn*(1.0+(alpha/(rn*rn))) / (rn*rn*rn);  //nueva aceleracion y
      vn_x = v_x + 0.5*(a_x + an_x)*dt; //nueva velocudad x
      vn_y = v_y + 0.5*(a_y + an_y)*dt; //nueva velocidad y
      
      //Actualizacion
      x = xn;
      y = yn;
      v_x = vn_x;
      v_y = vn_y;
      
      //instante i+2
      xn2 = x + (v_x * dt) + 0.5*an_x*dt*dt;  // nuevo x
      yn2 = y + (v_y * dt) + 0.5*an_y*dt*dt;  // nuevo y
      rn2 = sqrt(xn2*xn2 + yn2*yn2);  //nueva posicion
      an2_x = -4.0*pi*pi*xn2*(1.0+(alpha/(rn2*rn2))) / (rn2*rn2*rn2);  //nueva aceleracion x
      an2_y = -4.0*pi*pi*yn2*(1.0+(alpha/(rn2*rn2))) / (rn2*rn2*rn2);  //nueva aceleracion y
      vn2_x = v_x + 0.5*(an_x + an2_x)*dt; //nueva velocudad x
      vn2_y = v_y + 0.5*(an_y + an2_y)*dt; //nueva velocidad y

      //Hallar el periodo
      if((rn > r) && (rn > rn2)) {
	n++;
	if(n > NR) break;  //maximo NR revoluciones
	
	if( (xn > 0.0) && (yn > 0.0) )
	  theta = atan(yn/xn);
	else if( (xn < 0.0) && (yn > 0.0) )
	  theta = atan(-1.0*(double)(xn/yn)) + (pi/2.0);
	else if( (xn < 0.0) && (yn < 0.0) )
	  theta = atan((double)(yn/xn)) + pi;
	else
	  theta = atan(-1.0*(double)(xn/yn)) + (3.0*pi/2.0);
	
	fprintf(Salida, "%1i %4.6f %5.9f %5.9f %5.6f %5.6f\n", i, t, xn, yn, rn, theta*180/pi);
      }
    }

  return 0;
}