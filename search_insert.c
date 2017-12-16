#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define ARR_LEN(arr,len) {len = sizeof(arr)/sizeof(arr[0]);}

int main(){
	int list[] = {1,3,5,6};
	int target = 2, len;
	ARR_LEN(list,len);
	for(int i = 0; ; i++){
		if(list[i] >= target) return i;
		if(len-1 <= i) return len;
	}
}
