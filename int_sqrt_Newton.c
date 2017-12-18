#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>

int main(){
	int x = INT_MAX-1;
	int r = x;
	while (r > x/r){
		r = (r+x/r)/2;
	}
	return r;
}

