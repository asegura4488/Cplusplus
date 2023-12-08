
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;



int main()
{
int i;
double ax; //aceleracion eje x
double ay; //aceleracion eje y
double x;//posicion
double y;// posicion
double vx; //velocidad en x
double vy; // velocidad en y
double p;// pi
double dt; //intervalos de tiempo
double GM ; //
double t;
double a;
double e; //vel ini
double mp; //masa del planeta
double L; //momento
double U; //E pote
double K; //E cine
double c;
double q;//potencia
FILE *Salida;
char ArchSalida[] ="cometa.dat";
Salida = fopen(ArchSalida, "w");

//condiciones iniciales
t=0;
q=pow(10,23);
mp=(3.3)*q;
a=17.9;
e=0.96;
p=3.1416;
GM=4*p*p;
dt=0.001;
y=0;
x=a*(1+e);
vx=0;
vy=sqrt((GM*(1-e))/(a*(1+e)));

for(i = 0; i < 75000; i++)
{
t=i*dt;
ax =-(GM*x)/pow(((x*x)+(y*y)),1.5);
ay = -(GM*y)/pow(((x*x)+(y*y)),1.5);
vx = vx + ax*dt;
x = x + vx*dt;
vy = vy + ay*dt;
y = y + vy*dt;
L =(mp)*(x*vy-y*vx);
K = (0.5)*((vx*vx+vy*vy));
U = -(GM)/sqrt((x*x+y*y));
c = (K)/(U);
fprintf(Salida, "%4.7f %4.7f %4.0f %4.7f %4.7f\n",x ,y,L,t,c);
}

return 0;
}
