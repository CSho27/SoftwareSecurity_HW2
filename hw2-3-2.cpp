#include <stdio.h>
#define WORD "word"

int main(){
	int array[] = {12,15,221,3,432,54,16,67};
	int hold = 0;
	int x = 0;
	
	while(x<=7){
		if(array[x]<=array[7]){
		}else{
			hold = array[x];
			array[x] = array[7];
			array[7] = hold;
		}
		x++;
	}
	printf("%d", array[7]);
}
