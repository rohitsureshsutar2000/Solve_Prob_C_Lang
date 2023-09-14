#include<stdio.h>
#include<string.h>
void leng(char*p){
	int count=0;
	while(*p!=0){
		count++;
		p++;
	}
	printf("%d",count);
}
void main()
{
	char a[10];
	gets(a);
	leng(a);
}
