#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
double a,b,c,d,e,g;
cout << "Ingrese el primer valor: " << endl;
cin >> a;
cout << "Ingrese el segundo valor: " << endl;
cin >> b;
cout << "Ingrese el tercer valor: " << endl;
cin >> c;

d=a+b+c;
e=a*b*c;
cout << "la suma de los numeros es:" << d <<endl;
cout << "la promedio de los numeros es:" << d/3 <<endl;
cout << "el producto de los numeros es:" << e <<endl;

 if ((a>b)&&(a>c))
                {
                if(b>c) g=0;  /* c es el menor */ 
                else g=1;     /* b es el menor */
                } 
if ((b>a)&&(b>c))
{
if(a>c) g=2;
else g=3; /* a es el menor */                  
}
if ((c>a)&&(c>b))
{
if(a>b) g=4; /* b es el menor */
else g=5; /* a es el menor */ 
}



if(g==0)
printf("%f %f %f",a,b,c);
else 
     if(g==1)
     printf("%f %f %f",a,c,b);
     
                else 
                if(g==2)
                printf("%f %f %f",b,a,c);
                
                           else 
                           if(g==3)
                           printf("%f %f %f",b,c,a);
                           
                                      else 
                                      if(g==4)
                                      printf("%f %f %f",c,a,b);
                                      
                                                 else 
                                                 if(g==5)
                                                 printf("%f %f %f",c,b,a);
                                                 
 cout << endl;

}
