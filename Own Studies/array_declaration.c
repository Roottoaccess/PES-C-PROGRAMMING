#include<stdio.h>
#include<conio.h>
int main(){

    // Declaring the single dimentional array..
    // int arr[5] = {10,20,30,40,50};

    // This is the method to access the single element of the array..
    // printf("%d",arr[2]);

    /* For accessing all the elements of the array.. */
    // for(int i = 0; i < 5; i++){
    //     printf("%d\n",arr[i]);
    // }

    /* Creating a user input array.. */
    // int lmt;
    // printf("Enter the limit of the array: ");
    // scanf("%d", &lmt);
    // int a[lmt];
    // printf("Enter the value one by one..\n");
    // for(int i = 0; i < lmt; i++){
    //     scanf("%d",&a[i]);
    // }
    // printf("This is your entered array....");
    /* Lets print our array..*/
    // for(int i = 0; i < lmt; i++){
    //     printf("%d\n",a[i]);
    // }


    /* Multidimentional Array in C programming.... */

    // int mul[2][2] = {{4,8},{12,14}};

    /* Accessing the multidimentional array....*/
    // for(int i = 0; i < 2; i++){ // This is for the row in the matrix -> 
    //     for(int j = 0; j < 2; j++){ // This is for the col in the matrix ->
    //         printf("%d\t",mul[i][j]);
    //     }
    //     printf("\n");
    // }

    /* Creating a multidimentional array dinamically (user input) */
    int row, col;
    /* Taking the row value from the user */
    printf("Enter the row value: ");
    scanf("%d",&row);
    /* Taking the column value from the user */
    printf("Enter the col value: ");
    scanf("%d",&col);

    int arr[row][col]; // Declaring the array....

    printf("Enter the value one by one ----> \n");

    /* Taking the input of the values from the user.. */
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Printing your array ....\n");
    /* Printing the value of the array.... */
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}