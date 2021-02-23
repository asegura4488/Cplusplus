//Solucion ecuacion de Lapplace

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

int N = 20; //Tamaño de la red
int NMax = 5000; //Numero de iteraciones
double V[N][N]; //Matriz de potencial
double Ex[N][N]; //Componente campo electrico en x
double Ey[N][N];

double tmp; 
double omega ;
double r;
double dmax;
int tol=1.0e-13;
int i;
int j;



  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)
  {

 V[i][j]  = 0.0;
 Ex[i][j] = 0.0;
 Ey[i][j] = 0.0;
 omega = 1.6;

  }

// definiendo la geometria

for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)
{
   if( ((i==3 && j==2))  ||  ((i==3 && j==3))  )
   V[i][j] = 100;
}

//Defina la geometria del problema a resolver para V[i][j]
for(int n=1; n < NMax; n++){ //Itere varias veces a traves de la red
dmax =0.0;
for(int i=2; i < N-1; i++){ //Itere a lo largo de x
for(int j=2; j < N-1; j++){ //Itere a lo largo de y

//Excluya la geometria
if( ((i!=3)&&(j!=2)) || ((i!=3)&&(j!=3)) ) {
tmp=0.25*(V[i+1][j]+V[i-1][j]+V[i][j+1]+V[i][j-1]); //Valor temporal de V (Pot. en cada punto)
r = omega*(tmp-V[i][j]); //valor de r donde v[i][j] es Vold
V[i][j]=V[i][j]+r;

//valor de Vnew
if(r > dmax) dmax=r;
// printf("%3.10f",V[i][j]); IMPORTANTE
} } }

//Criterio de convergencia
if(dmax < tol) break;
}

//========================================================================
// Calculo del campo electrico
double fac=0.00075; // scaling factor for vector plot
double dx=1.0/N; //ancho del paso en Deltax=Deltay
for(int i=2; i < N-1; i++){ //Itere a lo largo de x
for(int j=2; j < N-1; j++){ //Itere a lo largo de x
//Excluya la misma geometria
if( ((i!=3)&&(j!=2)) || ((i!=3)&&(j!=3)) ) {
Ex[i][j]=-(V[i+1][j]-V[i-1][j])*fac; // centered difference
Ey[i][j]=-(V[i][j+1]-V[i][j-1])*fac; //2*dx absorbed in fac
} } }
// salida para graficar en gnuplot formato 3D
for(int i=1; i < N; i++){
cout << " " << endl; // linea necesaria para gnuplot
double x =i*dx;
for(int j=1; j < N; j++){
double y = j*dx;
printf("%3.10f,%3.10f %3.10f %3.10f %3.10f\n",x,y,V[i][j],Ex[i][j],Ey[i][j]);
} }






 return 0;
}
