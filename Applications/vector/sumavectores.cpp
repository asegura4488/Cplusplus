
using namespace std;
#include <iostream>
#include <math.h>
const float PI=3.1415936538;
float rad (float r)
{
  return r*180.0/PI;
}
class CVector 
{
public:
  
  float x,y,z;
  void set_values ();
  void set_values (float);
  void set_values (float, float);
  void set_values (float, float, float);
  CVector operator + (CVector);    //SUMA
  CVector operator - (CVector);    //RESTA 
  float operator * (CVector);      //PRODUCTO PUNTO
  CVector operator / (CVector);    //PRODUCTO CRUZ 
  
  float azimuth (void) 
  { 
    float cosphi=x/sqrt(x*x+y*y);  
    return acos(cosphi);
  }
  /////////////////////////RHO = MAGNITUD//////////////////////
  float rho (void)
  { 
    float rho=sqrt(x*x+y*y+z*z);
    return rho;
  }
  float theta (void)
  { 
    float costeta=z/sqrt(x*x+y*y+z*z);    
    return acos(costeta);
  }
};

//////////////////////////////////////////////////////////////
////////////////////////////SUMA//////////////////////////////
//////////////////////////////////////////////////////////////

CVector CVector::operator+ (CVector param) {
  
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  temp.z = z + param.z;
  return (temp);
}
//////////////////////////////////////////////////////////////
///////////////////////////RESTA//////////////////////////////
//////////////////////////////////////////////////////////////

CVector CVector::operator- (CVector param) {
  CVector temp;
  temp.x = x - param.x;
  temp.y = y - param.y;
  temp.z = z - param.z;
  return (temp);
}
//////////////////////////////////////////////////////////////
//////////////////////PRODUCTO PUNTO /////////////////////////
//////////////////////////////////////////////////////////////

float CVector::operator* (CVector param ) {
  return ((x * param.x)+(y * param.y)+(z * param.z));
}
//////////////////////////////////////////////////////////////
///////////////////////PRODUCTO CRUZ//////////////////////////
//////////////////////////////////////////////////////////////

CVector CVector::operator/ (CVector param) {
  CVector temp;
  temp.x = ((y * param.z)-(param.y*z));
  temp.y = (-1)* ((x * param.z)-(param.x*z));
  temp.z = ((x * param.y)-(param.x*y));
  return (temp);
}
//////////////////////////////////////////////////////////////


void CVector::set_values () {
  x=1;
  y=1;
  z=1;
}
//////////////////////////////////////////////////////////////

void CVector::set_values (float a) {
  x=a;
  y=1;
  z=1;
}
//////////////////////////////////////////////////////////////

void CVector::set_values (float a, float b) {
  x=a;
  y=b;
  z=1;
}

void CVector::set_values (float a, float b, float c) {
  x=a;
  y=b;
  z=c;
}

int main () 
{
  float *vec = new float [4];
  float *vec1 = new float [4];
  cout <<"\nDIGITE LAS COMPONENTES DEeL PRIMER. VECTOR:  (i,j,k) "<<endl;
  cout <<"\n i:  "; 
  cin >>vec[1]; 
  cout <<" j:  "; 
  cin >>vec[2];  
  cout <<" k:  "; 
  cin >>vec[3]; 
  cout <<endl;
  cout <<"\nDIGITE LAS COMPONENTES DEL SEGUNDO VECTOR:  (i,j,k) "<<endl;
  cout <<"\n i:  "; 
  cin >>vec1[1]; 
  cout <<" j:  "; 
  cin >>vec1[2];  
  cout <<" k:  "; 
  cin >>vec1[3]; 
  cout <<endl;
  
  
  CVector  *a  = new  CVector[5]; 
  a[0].set_values ();
  a[1].set_values(1);
  a[2].set_values(1,2);
  
  a[3].set_values(vec[1],vec[2],vec[3]);
  a[4].set_values(vec1[1],vec1[2],vec1[3]);
  
 // delete[] vec;    
  //vec=NULL;
  //delete[] vec1;    
  //vec1=NULL;
  
  CVector suma;
  suma = a[3] + a[4]; 
  CVector resta; 
  resta = a[3] - a[4];
  float punto = a[3] * a[4];
  CVector cruz;
  cruz = a[3] / a[4];
  
  
  delete[] a ;
  a =NULL;
  
  cout <<"\nLA SUMA DE LOS  VECTORES ES: " << suma.x << "i, " << suma.y<<"j, "<<suma.z<<"k."<<endl;  
  cout <<"\nLA RESTA DE LOS  VECTORES ES: "<< resta.x << "i, " << resta.y<<"j, "<<resta.z<<"k."<<endl;
  cout <<"\nEL PRODUCTO PUNTO ES:  "<< punto<<endl;
  cout <<"\nEL PRODUCTO CRUZ ES: "<< cruz.x << "i, " << cruz.y<<"j, "<<cruz.z<<"k."<<endl;
  cout << "\nEL VALOR DEL ANGULO THETA ES= " <<rad (cruz.theta())<<"°" << endl;
  cout << "\nEL VALOR DEL  AZIMUTH ES= " <<rad (cruz.azimuth())<<"°"<< endl;
  cout << "\nLA MAGNITUD DEL VECTOR ES: " << cruz.rho()<< endl;  
  cout << "\n\n\nJEISON VARGAS - FISICA UD 2011\n\n" <<  endl;
  
  return 0;
  
}
