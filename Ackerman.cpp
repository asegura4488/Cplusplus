
#include <iostream>
#include <math.h>

int Ackerman(int x, int y){

	if(x == 0){
		return pow(2,y);
	}
	else{
		if(y==0){
			return 1;
		}
		else
			return Ackerman(x-1,Ackerman(x,y-1));

	}

}

int Ackerman1(int m, int n){
	if(m==0)
		return n+1;
	else{
		if(n==0)
			return Ackerman1(m-1,1);
		else
			return Ackerman1(m-1,Ackerman1(m,n-1));
	
	}

}

int main(){

	//std::cout << Ackerman (1,0) << std::endl; 
	std::cout << Ackerman1(1,2) << std::endl;
}
