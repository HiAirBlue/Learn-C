#include <stdio.h> 
#include <stdlib.h>
#include <limits.h> 

int main(){
	int x = INT_MAX -1 ;
	int left = 1, right = x;
	if(x == 0) return 0;
	while(1){
		int mid = left + (right-left)/2;
		if(mid > x/mid) {
			right = mid -1;
		}
		else{
			if(mid+1 > x/(mid+1)){
				return mid;
			}
			else{
				left = mid + 1;
			}
		}
	}
}
