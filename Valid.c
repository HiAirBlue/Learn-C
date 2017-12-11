#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[10]="(([{))",peek;
	printf("ÇëÊäÈë´ıÅĞ¶Ï×Ö·û:");  
 	scanf("%s",s);
	int len = strlen(s);
	char *base, *stock = malloc(len);
	base = stock;
	
	for(int i=0;i < len;i++){
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			*stock++ = s[i];
		}
		else{
			peek = *--stock;
			if((s[i]==')'&&peek == '(')
			||(s[i]==']'&&peek == '[')
			||(s[i]=='}'&&peek == '{'));
			else{
				printf("%c",peek);
				return 0;
			}
				
		}
	} 
	if(stock == base){
		return 1;	
	}
	else
		return 0;
}
	

