{
Int_t a=3;
Int_t c=5;
Int_t m=17;                 //Declaración de variables
Int_t x=7;
Float_t y;
using namespace std;
for(Int_t i=1; i<=20; i++)  //Ciclo sobre t
{
x=(a*x+c)%m;                //Formula congruencial  
y=(float)x/(float)m;
cout << x <<"\t"<<y<<endl;  //Mostrar datos en pantalla
}
}
