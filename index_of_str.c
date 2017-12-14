#include <stdio.h> 
#include <stdlib.h>
#define ARR_LEN(arr,len) {len = sizeof(arr)/sizeof(arr[0]);} 

int main() {
	char string[] = "dfghjkcvbnmpoiuytrdfghjkxcvbnmcvbnjoiuhghello";
	char needle[] = "ll";
	int s_len, n_len, k = 0, i = 0, j = 0;
	ARR_LEN(string,s_len);
	ARR_LEN(needle,n_len);
//	printf("%d",n_len);
	for(;j<n_len-1;j++){
		if(string[i] == needle[j]){
			k++;
			i++;
//			printf("1- %d,%d,%d \n",k,j,i);
		}
		else{
			i = i - k + 1;
			j = 0;
			k = 0;
			for(;i<s_len-1;i++){
				if(string[i] == needle[j]){
					k++;
					i++;
				//	printf("2- %d,%d,%d \n",k,j,i);
					break;
				}
				//printf("4- %d,%d,%d \n",k,j,i);
			}
			if(i == s_len) return (-1);
		}
//		printf("5- %d,%d,%d \n",k,j,i);
	}
//	printf("3- %d,%d,%d \n",k,j,i);
	return (i-k);
	
}

