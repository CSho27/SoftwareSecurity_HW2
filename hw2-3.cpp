#include <stdio.h>

int main(){
	int x[] = {3,5,0};
	
	x[3] = (x[1]*x[2])-(x[1]/2);
	
	printf("%d", x[3]);
}
