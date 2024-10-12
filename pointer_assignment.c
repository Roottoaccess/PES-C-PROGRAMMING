#include<stdio.h>

void main(){
	
	int a = 10; int b = 11;
	
	int *p , *q;
	
	p = &a;
	
	q = &b;
	
	*q = *p;
	
	printf("value of a is: %d %d %d",a,*p,*q);
}
