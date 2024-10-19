#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if(num < 10){
		printf("This number is less than 10....");
	} else if(num == 10){
		printf("The value is 10");
	}
	else {
		printf("This number is greater than 10.....");
	}
}
