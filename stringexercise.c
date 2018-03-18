#include <stdio.h>
#include <string.h>
//Author: Alfredo  Soto
//copyrighted
int main(){
	char inp[101];
	printf("Enter a string: ");
	scanf("%s",inp);
	int i;
	int size=strlen(inp);
	for(i=size;i>=0;i--){
		printf("%c",inp[i]);
	}
	printf("\n");
	return 0;
}
