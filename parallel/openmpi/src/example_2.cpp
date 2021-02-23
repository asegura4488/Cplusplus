#include <omp.h>
#include <math.h>
#include <iostream>
#include <sys/time.h>
#include <stdio.h>

using namespace std;

int main(){
        
        #pragma omp parallel 
        printf("prueba de hilo (thread) %d de %d\n", omp_get_thread_num(), omp_get_num_threads());
						//Number of threads      // Number of cores	
	omp_set_num_threads(16); //Number of threads
	struct timeval start, end;
	long mtime, seconds, useconds;
	gettimeofday(&start, NULL);

const int size = 256;
double sinTable[size];
double num=0.;
double a;


#pragma omp parallel for
	for (int i=0; i< 100000000; i++){
	num += 1.;
	a = sqrt(pow(sin(num),2)+pow(cos(num),2));
	}
cout << "a value " << a << endl;

#pragma omp parallel for
	for (int n=0; n<size; n++){
	sinTable[n]=n+1;
	}
#pragma omp parallel for
	for (int n=0; n<size; n++){
	sinTable[n]=n+1;
        cout << sinTable[n] << endl;
 	}
cout << " " << endl;
gettimeofday(&end,NULL);
seconds = end.tv_sec - start.tv_sec;
useconds = end.tv_usec - start.tv_usec;
cout << "seconds " << seconds << endl; 
cout << "useconds " << useconds << endl; 
mtime = (seconds*1000+useconds/1000.0)+0.5;
cout << "The average time: " << mtime << " mili-seconds " << endl;
 




}
