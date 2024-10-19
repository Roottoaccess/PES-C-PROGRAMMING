#include<stdio.h>
#include<conio.h>

void main(){
	int num1, num2;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	    char choice;
    printf("Enter your choice (+, -, *, /): ");
    getchar();  // Consume the newline character left by the previous scanf
    scanf("%c", &choice);
	
	int result = 0;
	switch(choice){
		case '+':
			result = num1 + num2;
			printf("result = %d", result);
			break;
		case '-':
			result = num1 - num2;
			printf("result = %d", result);
			break;
		case '*':
			result = num1 * num2;
			printf("result = %d", result);
			break;
		case '/':
			result = num1 / num2;
			printf("result = %d", result);
			break;
		default:
			printf("Please check your input, once..");
	}
}
