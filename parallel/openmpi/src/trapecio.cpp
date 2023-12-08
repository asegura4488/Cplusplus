#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <iostream>
#include<sys/time.h>
#include <iomanip>
using namespace std;	
//Run using the number of processor of your machine ./trapecio 4
void Trap (double a, double b, int n, double *global, double *error);
double f(double x);
double error(double a, double b, int n);

int main(int argc, char* argv[]){
  
  struct timeval start, end;
  long mtime, seconds, useconds;
  gettimeofday(&start, NULL);
  double global = 0.;
  double error = 0.;
  double a=-0.5,b=0.7;
  int n;
  int thread_count;
  
  
  if (argv[1] == NULL) {
    cout << "You must specify the number of cores!!!" << endl; 
    exit(1);}
  
  thread_count = strtol(argv[1], NULL, 10); //Number of threads
  cout << "Running with: " << thread_count << " cores "<< endl;   
  printf("Introduzca el numero de trapecios n ");
  scanf("%d",&n);
  if (n==0) 
    {cout << "Escriba un valor diferente de 0" << endl;
      printf("Introduzca el numero de trapecios n \n");
      scanf("%d",&n);
    }
  
  
#pragma omp parallel
  Trap(a,b,n,&global, &error);
  cout << "Con "<< n << " Trapecios " << endl;
  printf("La estimacion de la integral es: %.20f\t %.20f \n", global, error);
  cout << "La estimacion de la integral es: " << setprecision(20) << global << "+-" <<setprecision(20) << error << endl;
  gettimeofday(&end,NULL);
  seconds = end.tv_sec - start.tv_sec;
  useconds = end.tv_usec - start.tv_usec;
  cout << "seconds " << seconds << endl; 
  cout << "useconds " << useconds << endl; 
  mtime = (seconds*1000+useconds/1000.0)+0.5;
  cout << "The average time: " << mtime << " mili-seconds " << endl;
  return 0; 
  
}
double f(double x){
  double f = cos(x);
  return f;
}
double ferror(double a, double b, int n){  
double k = 3.14159265; //Esto debe ser cota de la segunda derivada de la funcion 
double e = cos(k)*pow((b-a),3)/(12*pow(n,2));
return e;
}


void Trap (double a, double b, int n, double *global, double *error){
  double h, x, result;
  double local_a, local_b;
  int i , local_n;
  
  int rank = omp_get_thread_num(); //Number of threads
  cout << rank << endl;
  int thread_counts = omp_get_num_threads(); // Number of cores
  h = (b-a)/n;
  local_n = n/thread_counts; 
  local_a = a + rank*local_n*h;
  local_b = local_a + local_n*h;
  result = (f(local_a)+f(local_b))*0.5;
  
  for (i=1; i <= local_n-1; i++){
    x = local_a + i*h;
    result += f(x);
  }
  result = result*h;
#pragma omp critial
  *global += result;
  *error += ferror(local_a, local_b, local_n);
;
}
