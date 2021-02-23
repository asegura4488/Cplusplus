#include <stdio.h>
#include <math.h>

float h=0.01, yi=1, xi=0;

float f(float x, float y);
float runge(float x, float y);


main(float x,float y)

{
y=yi;
runge(x,y);
}


 float f(float x, float y)
             {
	       float f=-2*y;      
             return(f);
             }


        float runge(float x, float y)
        {
	  for (x=xi;x<=20;x=x+h)
            {
            float k1,k2,k3,k4;
            k1=h*f(x,y);
            k2=h*f((x+h/2),(y+k1/2));
            k3=h*f((x+h/2),(y+k2/2));
            k4=h*f((x+h),(y+k3));
            printf("%f  %f \n",x,y);
            y=y+(k1+(2*k2)+(2*k3)+k4)/6;
            }
	}

