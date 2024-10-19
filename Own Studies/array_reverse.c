#include<stdio.h>

void main(){
    int lmt;
    printf("Enter the value of lmt: ");
    scanf("%d", &lmt);

    int arr[lmt];

    printf("Enter the value one ny one.... \n");
    /* Inserting the value in the array */
    for(int i = 0; i < lmt; i++){
        scanf("%d", &arr[i]);
    }

    int start = 0, end = lmt - 1, temp = 0;

/* Logic behing the Problem */
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
printf("Your reverese order array is here.... \n");
    /* Printing the reversed array..... */
    for(int i = 0; i < lmt; i++){
        printf("%d \t",arr[i]);
    }

}