#include<stdio.h>

/* Pointers are the non primitive datatypes..... */
void main(){
	
	int a = 45;
	
	int *p = &a;
	
	int **q = &p;
	
	int ***r = &q;
	
	*p = 12;
	
	**q = 18;
	
	printf("Value of a is: %d %d %d %d",a,*p,**q,***r);
}
