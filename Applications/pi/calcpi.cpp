void calcpi()
{
  int n = 10000; //numero de dardos a lanzar en el area
  double r=5;

  double h=5; //centro del circulo
  double k=5;

  Int_t  nf=0; //numero de aciertos fuera del circulo
  Int_t  nd=0; //numero de aciertos dentro del circulo
  gRandom->SetSeed(); //semilla para que el montecarlo comienze siempre diferente

  

  double x,y;
  double lado=2.0*r;
   
  for(int i=0; i<n;i++)
    {
      x=gRandom->Uniform(0.0,lado);
      y=gRandom->Uniform(0.0,lado);
      x=x-h;
      y=y-k;


      if((x*x+y*y)>(r*r))
	nf++;
      else
	{
	  if((x*x+y*y)<=(r*r))
	    nd++; 


	}
    }

  double pi;

  pi=((double)nd*4/((double)n)); 
  cout  << pi <<endl;

}
