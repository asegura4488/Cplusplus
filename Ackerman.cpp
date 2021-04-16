
#include <iostream>
#include <math.h>

long int Ackerman(int x, int y){

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

int main(){

	std::cout << Ackerman(2,4) << std::endl; 
	
}
