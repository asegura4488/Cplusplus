
//Programa para evaluar integrales numericamente
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//Declaracion de funciones
void gauleg(double x1,double x2,double x[],double w[],int n);
double function(double x);
double Trapezoid(int N, double Min, double Max);
double Simpson(int N, double Min, double Max);
double Quadrature(int N, double Min, double Max);
//=============================================================
int main()
{
//Declaracion de variables
int N; //Numero de iteraciones
double PI = 4.0*atan(1.0); //Valor de pi
double vmin, vmax; //Limites inferior y superior
double r1, r2, r3; //Tecnicas de integracion
vmin = 0.0;
//Editar limite inferior de la integral
vmax = 1.570796;
//Editar limite superior de la integral
//Usuario ingresa el numero de iteraciones deseadas
printf("Input the number of quadrature points N:\n");
scanf("%d",&N);
//Metodo del trapezoide
r1 = Trapezoid(N,vmin,vmax); //solucion de la integral
//Metodo de Simpson o Kepler
r2 = Simpson(N,vmin,vmax); //solucion de la integral
//Cuadratura Gausiana
r3 = Quadrature(N,vmin,vmax); //solucion de la integral
fprintf(stdout,"\n");
fprintf(stdout,"SOLUCION\n");
fprintf(stdout,"*****************************************************************\n");
fprintf(stdout,"Iteraciones\tM.Trapezoide\t\tM.Simpson\t\tM.Cuadratura Gausiana *\n");
fprintf(stdout,"%d\t\t%5.14lf\t%5.14lf\t%5.14lf*\n",N,r1,r2,r3);
fprintf(stdout,"*****************************************************************\n");
return 0;
}//Fin del main()
//Definicion de Funciones
//------------------------------------------------------------
//Funcion a integrar numericamente
double function(double x)
{
double f;
f = sin(x);
//f = 1/(sqrt(1-(sin(1)*sin(1)*sin(x)*sin(x))));
return f;
}
//------------------------------------------------------------
//Funcion necesaria para el metodo de cuadratura gaussiana
void gauleg(double x1,double x2,double x[],double w[],int n) {
int m,j,i;
double EPS=3.0e-11;
double z1,z,xm,xl,pp,p3,p2,p1;
m=(n+1)/2; // Find only half the roots because of symmetry
xm=0.5*(x2+x1);
xl=0.5*(x2-x1);
for (i=1;i<=m;i++) {
z=cos(3.141592654*(i-0.25)/(n+0.5));
do {
p1=1.0; p2=0.0;
for (j=1;j<=n;j++) { //Recurrence relation
p3=p2; p2=p1;
p1=((2.0*j-1.0)*z*p2-(j-1.0)*p3)/j;
}
pp=n*(z*p1-p2)/(z*z-1.0); // Derivative
z1=z;
z=z1-p1/pp; //Newtons method
} while (fabs(z-z1) > EPS); //EPS=3.0e-11
x[i]=xm-xl*z;
x[n+1-i]=xm+xl*z;
w[i]=2.0*xl/((1.0-z*z)*pp*pp);
w[n+1-i]=w[i];
}
}
//-----------------------------------------------------------
//Metodo del trapezoide
double Trapezoid(int N, double Min, double Max)
{
double Interval;
double Trap = 0.0;
double x;
Interval = (Max-Min)/(N-1);
for(int i = 2; i < N; i++)
{
x = Interval*(i-1);
Trap = Trap + function(x)*Interval;
}
Trap = Trap + 0.5*(function(Min)+function(Max))*Interval;
return Trap;
}
//-------------------------------------------------------------
//Regla de Simpson
double Simpson(int N, double Min, double Max)
{
double Interval;
double Simp = 0.0;
double x;
Interval = (Max-Min)/(N-1);
for(int i = 2; i < N; i=i+2)
{
x = Interval*(i-1);
Simp = Simp + 4.0*function(x)*Interval;
}
for(int i = 3; i < N; i=i+2)
{
x = Interval*(i-1);
Simp = Simp + 2.0*function(x)*Interval;
}
Simp = Simp + (function(Min) + function(Max))*Interval;
Simp = Simp/3.0;
return Simp;
}
//----------------------------------------------------------------
//Cuadratura gaussiana
double Quadrature(int N, double Min, double Max)
{
double x[N];
double w[N];
double approx;
gauleg(Min,Max,x,w,N);
approx = 0.0;
for (int i=1; i<=N; i++)
approx += w[i]*function(x[i]);
return approx;
}
//=================================================================

