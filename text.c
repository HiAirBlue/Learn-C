#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN(array, length){ length =  sizeof(array) / sizeof(array[0]); }
int main(){
	int x[] = {1,2,3,4,5}, len;
	ARR_LEN(x,len);
	//scanf("%d",&x);
	printf("%d",len);
	return 0;
} 
