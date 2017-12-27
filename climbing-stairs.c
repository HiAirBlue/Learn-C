/*
*  You are climbing a stair case. It takes n steps to reach to the top.
*  Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*  data 2017.12.20 
*/ 

#include <stdio.h> 
#include <stdlib.h>

int climbStairs(int n) {
  	if(n == 0) return 0;
  	if(n == 1) return 1;
  	if(n == 2) return 2;
  	if(n > 2){
  		int steps[n];
  		steps[0] = 1;
  		steps[1] = 2;
  		for(int i = 2; i < n; i++){
  			steps[i] = steps[i-1] + steps[i-2];
	 	 }
	 	 return steps[n-1];
	  }	  
}

int main(){
	int c;
	while(1){
		printf("please input steps:");
		scanf("%d", &c);
		printf("%d \n ",climbStairs(c));
	}
	return 0;
	
}
