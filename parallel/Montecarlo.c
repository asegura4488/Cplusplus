#include  <omp.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 100000000
#define f(A) (sqrt(1.0-(A*A)))
main()
{
float sum0, x, pi;
int i;
int sum = 0.0;
#pragma omp parallel private(x,sum0) shared(w,sum)
{
sum0=0.0;
#pragma omp for
for (i=1; i<=N; i++)
{
x = (float)1.0*rand()/RAND_MAX;
sum0 = sum0 + f(x);
}
#pragma omp critical
{
sum=sum+sum0;
}
} 
/*end omp parallel*/
pi=4.0*sum/N;
printf("pi = %f\n",pi);
}
