#include <stdio.h> 
#include <stdlib.h>


int max(int a,int b) {
	if(a > b)  return a;
	else return b;
}

int main(){
	int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
	int numSize = 9;
	int curSum = nums[0] ,maxSum = nums[0];
	for(int i = 1;i < numSize;i++){
		curSum = max(nums[i],curSum + nums[i]);
		maxSum = max(curSum,maxSum);
	}
	return maxSum;
}
