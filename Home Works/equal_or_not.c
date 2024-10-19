#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2;
    printf("Enter the first value: ");
    scanf("%d",&num1);

    printf("Enter the second value: ");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("The two numbers are equal....");
    }else{
        printf("The numbers are not equal....");
    }
}

