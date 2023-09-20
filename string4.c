#include<stdio.h>
#include<string.h>

void CopyS(char*p){
	char b[100];
	int q=0;
	while(*p>=0){
		b[q] = *p;
		p++;
		q++;
	}
	printf("%s", b);
}
void main(){
	char a[100];
	gets(a);
	CopyS(a);
}
