#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

int main ()
  
{
  int r;
string str;
 cout <<"El siguiente programa encuentra las raices de una ecuacion cuadratica de la forma ax^2+bx+c. Ud debe ingresar cada constante con la forma c+di, siendo c la parte real y d la parte imaginaria de dicha constante"<< endl;

 cout <<"Ingrese a:"<< endl;

 
 getline(cin,str);

 string str6 (str);
// string str2(str);



 size_t found_1;   
 size_t found1;

found_1=str.find_first_of("qwertyuopasdfghjklñzxcvbnm,ABCDEFGHIJKLMNOPQRSTUVWXYZ_;¿¡?=/&%$·#!");

if (found_1!=string::npos)
{
 
cout <<"Ingreso letras, el formato no es correcto" << str[found_1] << endl;

 return -1;
 }

  found1=str.find_last_of("+-");
  if (found1!=string::npos)

    {
      int(found1);
    }
      
  else
    {
      cout <<"el formato del numero ingresado no es el adecuado"<<endl;
      return -1;
    }
   size_t found;
   found=str.find_first_of("i");
   if (found!=string::npos)

  {
    int (found);
  }
   else
     {

       cout << "el formato del numero ingresado no es el adecuado"<<endl;

     }
   string::iterator it;
   str.erase(int(found1),int(found));
   
   //cout <<str1<< endl;
   stringstream str2;
   str2 << str;
   double avalor(0.0);
   str2 >> avalor;

    cout <<"la parte real de la constante a es: "<< avalor <<endl;

  

   string::iterator it2;
   str6.erase(0,int(found1));
   stringstream str3;
   str3 << str6;
   double bvalor(0.0);
   str3 >> bvalor;

   cout <<"la parte imaginaria de la constante a es: "<< bvalor <<endl;
   cout <<""<<endl; 
   ////////////////////////////////////////////////////////////////////////////////para b://///////////////


 cout <<"Ingrese b: "<<endl;
  string strb;
  getline(cin,strb);
 string str6b (strb);

 size_t found_2;
 size_t found2;


found_2=strb.find_first_of("qwertyuopasdfghjklñzxcvbnm,ABCDEFGHIJKLMNOPQRSTUVWXYZ_;¿¡?=/&%$·#!");

if (found_2!=string::npos)
{
 
cout <<"Ingreso letras, el formato no es correcto" << strb[found_2] << endl;

 return -1;
 }

  found2=strb.find_last_of("+-");
  if (found2!=string::npos)

    {
      int(found2);
	
    }
  else
    {
      cout <<"el formato del numero ingresado para la constante b no es el adecuado"<<endl;
      return -1;
    }
  size_t found3;
   found3=strb.find_first_of("i");
   if (found3!=string::npos)

  {
    int (found3);
  }
   else
     {

       cout << "el formato del numero ingresado no es el adecuado"<<endl;

     }
   string::iterator it3;
   strb.erase(int(found2),int(found3));
   
 
   stringstream str2b;
   str2b << strb;
   double breal(0.0);
   str2b >> breal;

    cout <<"la parte real de la constante b es: "<< breal <<endl;

  

   string::iterator it4;
   str6b.erase(0,int(found2));
   stringstream str3b;
   str3b << str6b;
   double bimaginario(0.0);
   str3b >> bimaginario;

   cout <<"la parte imaginaria de la constante b es: "<< bimaginario <<endl;
   /////////////////////////////////////////para c ///////////////////////////
 cout <<"Ingrese c: "<<endl;
  string strc;
  getline(cin,strc);
 string str6c (strc);

size_t found_4;
 size_t found4;

found_4=strc.find_first_of("qwertyuopasdfghjklñzxcvbnm,ABCDEFGHIJKLMNOPQRSTUVWXYZ_;¿¡?=/&%$·#!");

if (found_4!=string::npos)
{
 
cout <<"Ingreso letras, el formato no es correcto" << strc[found_4] << endl;

 return -1;
 }

  found4=strc.find_last_of("+-");
  if (found4!=string::npos)

    {
      int(found4);
	
    }
  else
    {
      cout <<"el formato del numero ingresado para la constante c no es el adecuado"<<endl;
      return -1;
    }
  size_t found5;
   found5=strc.find_first_of("i");
   if (found5!=string::npos)

  {
    int (found5);
  }
   else
     {

       cout << "el formato del numero ingresado no es el adecuado"<<endl;

     }
   string::iterator it5;
   strc.erase(int(found4),int(found5));
   
 
   stringstream str2c;
   str2c << strc;
   double creal(0.0);
   str2c >> creal;

    cout <<"la parte real de la constante c es: "<< creal <<endl;

  

   string::iterator it6;
   str6c.erase(0,int(found4));
   stringstream str3c;
   str3c << str6c;
   double cimaginario(0.0);
   str3c >> cimaginario;

 cout <<"la parte imaginaria de la constante c es: "<< cimaginario <<endl;

 
float a,b,c,xi,xj,xI,xJ,d,e,f,rr;
  
         a=avalor;
	 b=breal;
	 c=creal;
	 d=bvalor;
	 e=bimaginario;
	 f=cimaginario;

	if(d==0 && e==0 && f==0)

	  {
	   

    if(a==0&&b!=0)
    {
      cout <<"su ecuacion es lineal" <<endl;
      xi=-c/b;
      cout <<"la solucion es " << xi <<endl;
    }
    else
    {
      if(a==0&&b==0)
      {
	cout <<"la funcion es constante: " << c <<endl;
      }
         

      else
	{
	  if((b*b-4*a*c)>=0)
	    {
	      xi=(-b+sqrt(b*b-4*a*c))/(2*a);
              xj=(-b-sqrt(b*b-4*a*c))/(2*a);
	      cout <<"la primera raiz es: " << xi <<endl;
              cout <<"la segunda raiz es: " << xj <<endl;
            }
	  else
	    {  
	    if(b==0)
	      {
            xI=(sqrt(4*a*c-b*b))/(2*a);
            xJ=(sqrt(4*a*c-b*b))/(2*a);
	    cout <<"la primera raiz es: " <<"+i"<< xI <<endl;
            cout <<"la segunda raiz es: " <<"-i"<< xJ <<endl;
	      }
	    else 
	      {
            xi=(-b)/(2*a);
            xI=(sqrt(4*a*c-b*b))/(2*a);
            xJ=(sqrt(4*a*c-b*b))/(2*a);
	    cout <<"la primera raiz es: " << xi <<"+i"<< xI <<endl;
            cout <<"la segunda raiz es: " << xi <<"-i"<< xJ <<endl;

              }
            }


         }

       }


     

	  }

	else 

	  {

	    if(a==0 && b==0 && c==0)
	      {

		if(4*d*f-e*e>=0)
		  {
		rr=sqrt(4*d*f-e*e);
		cout <<"-i"<< e <<"+"<<rr<<"/i"<<2*d<<endl;
		cout <<"-i"<< e <<"-"<<rr<<"/i"<<2*d<<endl;
		  }
		else
		  {
		    rr=sqrt(e*e-4*d*f);
		    cout <<"-i"<< e <<"+"<<rr<<"/i"<<2*d<<endl;
		    cout <<"-i"<< e <<"-"<<rr<<"/i"<<2*d<<endl;
		  }

	      }
          else
	    {
	  {
	    float j=b*b+e*e-4*a*c+4*d*f;
	    float k=4*a*f-4*c*d+2*b*e;
          
	    if(k==0)
	      {
                

		if(j>=0){j=j;} else{j=-j;}
		double y=-b-sqrt(j);
		double z=-b+sqrt(j); 
             
		double yy=(a*y-b*e)/(2*(a*a+b*b));
		double zz=-(a*e+b*y)/(2*(a*a+b*b));
		double ww=(a*z-b*e)/(2*(a*a+b*b));
		double qq=-(a*e+b*z)/(2*(a*a+b*b));
                

		cout <<"la primera raiz es " << yy <<"+"<< zz <<"i"<<endl;
		cout <<"la segunda raiz es " << ww <<"+"<< qq <<"i"<<endl;
            }
	    else
	      {
		cout << "la primera raiz es "<<"("<< -b <<"+i"<< e <<"+sqrt("<< j <<"+"<< k <<"i"<<"))/("<< 2*a <<"+i"<< 2*d <<")" <<endl;
	    cout << "la primera raiz es "<<"("<< -b <<"+i"<< e <<"-sqrt("<< j <<"+"<< k <<"i"<<"))/("<< 2*a <<"+i"<< 2*d <<")" <<endl;
              }

	      }

	    }
	  }
       

return 0;

}






     


 

 
