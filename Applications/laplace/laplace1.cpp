//Solucion ecuacion de la place

#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<math.h>


using namespace std;


int main()
{
 

int  N=20; //red de N puntos
int  maxiter = 5000; // Numero maximo de iteraciones
int i;
int j;
double x;
double y;
double r;
double V[N][N];
double Ex[N][N];
double Ey[N][N];
double tol;
double omega;
double tmp;
double dmax;
tol=1.0e-13;  //Criterio de convergencia. Por ejemplo: 1.0e-13
omega=1.5;//Defina omega entre 1 y 2
for(int i=0; i<N; i++)
for(int j=0 ; j<N; j++)
{
 V[i][j]=0.0;
 Ex[i][j]=0.0;
 Ey[i][j]=0.0;

 if( ((i==5) && (j==5)) || ((i==5) && (j==4)) )
V[i][j]=100;
}
for(int n=1; n < maxiter; n++){ //Itere varias veces a traves de la red
dmax =0.0;
for(int i=2; i < N; i++){ //Itere a lo largo de x
for(int j=2; j < N; j++){ //Itere a lo largo de y
//Excluya la geometria
if( ((i!=5)&&(j!=5))|| ((i!=5)&&(j!=4)) )
 {
tmp=0.25*(V[i+1][j]+V[i-1][j]+V[i][j+1]+V[i][j-1]); //Valor temporal de V
r=omega*(tmp-V[i][j]); //valor de r donde v[i][j] es Vold
V[i][j]=V[i][j]+r;//valor de Vnew
if(r > dmax) dmax=r;
} }}
//Criterio de convergencia
if(dmax < tol) break;
}

// Calculo del campo electrico
double fac=0.00075; // scaling factor for vector plot
double dx=1.0/N; //ancho del paso en Deltax=Deltay
for(int i=2; i < N-1; i++){ //Itere a lo largo de x
for(int j=2; j < N-1; j++){ //Itere a lo largo de x
//Excluya la misma geometria
if( ((i!=5)&&(j!=5))|| ((i!=5)&&(j!=4)) )
 {
Ex[i][j]=-(V[i+1][j]-V[i-1][j])*fac; // centered difference
Ey[i][j]=-(V[i][j+1]-V[i][j-1])*fac; //2*dx absorbed in fac
} } }
// salida para graficar en gnuplot formato 3D
for(int i=1; i < N; i++){
cout << " " << endl; // linea necesaria para gnuplot
x=i*dx;
for(int j=1; j < N; j++){
y=j*dx;
printf("%3.10f,%3.10f %3.10f %3.10f %3.10f\n",x,y,V[i][j],Ex[i][j],Ey[i][j]);
} }


return 0;
}

