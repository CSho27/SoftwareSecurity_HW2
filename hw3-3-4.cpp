#include <stdio.h>
int A = -412;

int proc1(int* a, int b, int c){
	int l=0,k=0,p=0,u=0;
	while(c<u){
		p = 1;
		while(c < p){
			c++;
		}
	}
}

int main(){
	int x = 7;
	int y = 100;
	int i = 0;
	
	
	while(i<y){
		x = (int) &i;
	}
	printf("%d", proc1(&x, y, A));
}
