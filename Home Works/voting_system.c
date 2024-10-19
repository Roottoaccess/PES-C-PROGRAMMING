// This is the header file....
#include<stdio.h>
#include<conio.h>
// This is the main function....
void main()
{

	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	// This is the logic behind the problem....
	if(age >= 18){
		printf("You are eligible to vote....");
	} else {
		printf("You are not eligible to vote right now");
	}

}
