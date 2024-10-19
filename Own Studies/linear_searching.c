/* This is the linear search program in C Programming */
#include<stdio.h>

int main(){
    /* Declaring the limit of the array */
    int lmt;
    printf("Enter the limit of the array: ");
    scanf("%d",&lmt);

    /* Now declaring the array... */
    int arr[lmt];

    printf("Enter the values one by one.... \n");
    /* Taking the values of the array from the user */
    for(int i = 0; i < lmt; i++){
        scanf("%d",&arr[i]);
    }

    /* Displaying the values */
    for(int i = 0; i < lmt; i++){
        printf("%d\t",arr[i]);
    }

    printf("\n");

    /* Taking the user input to serch the value... */
    int search;
    printf("Enter the value you want to search: ");
    scanf("%d",&search);

    /* Applying the linear search algorithm */
    int count = 0;
    for(int i = 0; i < lmt; i++){
        if(search == arr[i]){
            count++;
        }
    }

    if(count > 0){
        printf("The element you have entered for search is present in the array %d times",count);
    } else {
        printf("The element you have entered is not there in the array....");
    }
    return 0;
}