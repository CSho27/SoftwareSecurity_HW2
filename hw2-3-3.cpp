#include <stdio.h>

int main(){
	int x = 100;
	
	do{
		int y = x/100;
		int z = (y*-100 + x)/10;
		int a = x-(((x/10)*4) + (x/10)) * 2;
		int b = y*y*y+z*z*z+a*a*a;
		
		if(b == x){
			printf("%d", x);
		}
		x++;		
	}while(x<=999);
}
