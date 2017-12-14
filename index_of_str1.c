#include <stdio.h> 
#include <stdlib.h>

int main(){
	char string[] = "dfghjkcvbnmpoiuytrdfghjkxcvbnmcvbnjoiuhghello";
	char needle[] = "ll" ;
	
	if (!string || !needle) return -1;
	for(int i = 0; ;i++){
		for(int j = 0; ;j++){
			if(needle[j] == 0) return i;
			if(string[i+j] == 0) return -1;
			if(string[i+j] != needle[j]) break;
		}
	}
}
