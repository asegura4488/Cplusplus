#include <stdio.h>
#include <math.h>


#define PI 3.14159265
#define 0.2409
#define GM 4*PI*PI

#define mp 0.05519
#define Th 3.0*PI/2.0
#define xo -0.39
#define yo 0.0
#define vorb 10.06
#define Tmax
int main(void)

{
float t=0.0,x,y,vx,vy,ax,ay,aux,auy;
float Ec, Emo, Emf,Ep;
float R, v, Lo, Lf;
float eL, eE;
float dt;
FILE *trayec;
trayec=fopen("Mercurio.dat","w");
x=xo;
y=yo;
dt=0.00001;
vx=vorb*cos(Th);
vy=vorb*sin(Th);
v=sqrt(vx*vx+vy*vy);
R=sqrt(x*x+y*y);
Lo=mp*(x*vy-y*vx);
Ec=0.5*mp*v*v;
Ep=-GM*mp/R;
Emo=Ec+Ep;
Tmax=100000000;
while(t<Tmax)

{
ax=-(GM*x)/pow((x*x+y*y),1.5);
aux=ax;
ay=-(GM*y)/pow((x*x+y*y),1.5);
auy=ay;
x=x+vx*dt+0.5*ax*dt*dt;
y=y+vy*dt+0.5*ay*dt*dt;
fprintf(trayec,"%f %f\n",x,y);
t=t+dt;
}
//electrónico
v=sqrt(vx*vx+vy*vy);
R=sqrt(x*x+y*y);
Lf=mp*(x*vy-y*vx);
Ec=0.5*mp*v*v;
Ep=-GM*mp/R;
Emf=Ec+Ep;
eE=100.0*fabs((Emf-Emo)/Emf);
eL=100.0*fabs((Lf-Lo)/Lf);
printf("Error en Em %10f\n",eE);
printf("Error en L %10f\n" ,eL);
fclose(trayec);
getche();
}
