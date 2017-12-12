#include <stdio.h> 
#include <stdlib.h>

# define ARR_LEN(array,len) {len = sizeof(array)/sizeof(array[0]);}
int main(){
	int i = 0,nums[] = {3,2,2,3,4,5,6} , len, val;
	ARR_LEN(nums,len);
	val = 2;
	for(int j = 0;j < len;j++){
		if(nums[j] != val){
			nums[i] = nums[j];
			i++;
		}
	}


	printf("[");
	for (int j = 0;j < i;j++){
		printf("%d",nums[j]);
		if(j+1<i){
			printf(",");
		}
	}
	printf("]");
	
}
