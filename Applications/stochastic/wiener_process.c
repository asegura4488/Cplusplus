#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define PI  3.14159265358979

int main(void)
{
float deltat=0.01;
float a=0.0; 0.0;
float deltaW= 0.0;
float t=0.0;
float W[1000];
int i;
float x, y;
float gauss1, gauss2;
float z;
float zz;
srand48(0.5);
for(i=0;i<=1000;i=i+1)
{
x=drand48();
y=drand48();
gauss1=sqrt(-2.0*log(x))*cos(2.0* PI *y);
gauss2=sqrt(-2.0*log(x))*sin(2.0* PI *y);
t=t+deltat;
W[i]=W[i-1]+sqrt(deltat)*gauss2;
z=exp(t+W[i]*0.5);
zz=exp(t)*exp(W[i]*0.5);
printf("%f %f %f %f\n", t , W[i], z, zz);
}

return 0;
}

