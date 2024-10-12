#include<stdio.h>
#include<conio.h>
void main(){
	
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	int b;
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	if(a > b){
		printf("a is greater than b.....");
	} else if(a == b){
		printf("a and b both are equal....");
	} else{
		printf("b is greater than a......");
	}
}
