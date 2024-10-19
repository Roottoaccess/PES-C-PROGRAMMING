#include<stdio.h>

void main(){
	float a,b;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	
	printf("Enter the value of b: ");
	scanf("%f",&b);
	
	
	if(a > b){
		printf("a is greater than b");
	}else if(a == b){
		printf("a is equal to b");
	}
	else {
		printf("b is greater than a");
	}
}
