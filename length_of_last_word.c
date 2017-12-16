#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char s[] = "Hello World wang chen";
	int tail = strlen(s), len = 0;
	printf("tail:%d\n", tail);
	while ((tail > 0) && (s[tail-1] == ' ')) tail--;
	while((tail > 0) && (s[tail-1] != ' ')){
		tail--;
		len++;
		printf("%c-",s[tail]);
	}
	return len;
}
