#include <stdio.h>
#include <stdlib.h>

#define Dt 0.01
#define Pi 31.416

int main()
{
FILE *fp; // puntero al archivo
fp = fopen ("datos.dat", "w");

float x[3150],v[3150];
int i = 0;
float t=0.01;
    for (i=0;i<3140;i++)
    {
    x[0]=1.;
    v[0]=0.;
    x[i+1]=v[i]*Dt+x[i];
    v[i+1]=v[i]-x[i]*Dt;
    printf("%d %f %f\n",i,x[i],v[i]);
    t=t+Dt;
    fprintf(fp,"%f %f\n",t, x[i]);
    }

return 0;

}
