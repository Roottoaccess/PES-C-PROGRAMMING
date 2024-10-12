#include<stdio.h>
#include<conio.h>

void main(){
	
	// Creating 2 variable
	int a = 50, b = 20, c = 44;
	
	// Creating 2 pointers
	int *p, *q , *z;
	
	p = &a;
	
	q = &b;

		z = &c;
		
	// Now checking the results....
	printf("value of a is: %d\n", a);
	
	// This will also return the value of a = *p
	printf("value of a is: %d\n", *p);
	
	// Now printing the address of a.....
	printf("address of a is: %x\n", &a);
	
	// Another way to print the address of a is.....
	printf("address of a is: %x\n", p);
	
	printf("This is the address of b: %d\n", *q);
	
	// This is an experiment......
	printf("The address of the variable c is: %x\n",z);
	
	printf("And the value of c is: %d\n", *z);
}
