/* Including the header file */
#include<stdio.h>
#include<stdlib.h>

/* Declaring the main function */
int main(){

    /* Creting the first matrix */
    int row,col;

    printf("Enter the first matrix row: ");
    scanf("%d",&row);
    printf("Enter the first matrix column: ");
    scanf("%d",&col);
    /* Declaing the first 2-D array.... */
    int arr1[row][col];

    printf("Enter the value of the first matrix one by one... \n");

    /* Inserting the value in the first matrix */
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    /* Building the second matrix */

    int row1,col1;

    printf("Enter the second matrix row: ");
    scanf("%d",&row1);
    printf("Enter the second matrix column: ");
    scanf("%d",&col1);
    /* Declaing the first 2-D array.... */
    int arr2[row1][col1];

    printf("Enter the value of the second matrix one by one... \n");

    /* Inserting the value in the first matrix */
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    /* Printing the first matrix */
    printf("Printing the first matrix... \n");

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d \t",arr1[i][j]);
        }
        printf("\n");
    }

    /* Printing the second matrix */
    printf("Printing the second matrix... \n");

    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            printf("%d \t",arr2[i][j]);
        }
        printf("\n");
    }

    /* Performing the addition of the two matrix */
    // if((row > row1) && (col > col1)){
    //     int sum[row][col];
    //     int ab = abs(row - row1);
    //     int ac = abs(col - col1);
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col1; j++){
    //         sum[i][j]  = arr1[i][j] + arr2[i][j];
    //     }

    // }
    // }

    int newRow = row > row1 ? row : row1;
    int newCol = col > col1 ? col : col1;
    int sum[newRow][newCol];
    int rowdiff = abs(row1 - row);
    int coldiff = abs(col1 - col);
    for (int i = 0; i < (newRow - rowdiff); i++)
    {
        for (int j = 0; j < (newCol - coldiff); j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    if (row > row1)
    {
        for (int i = 0; i < row; i++)
        {
            sum[row-1][i] = arr1[row-1][i];
            sum[i][row-1] = arr1[i][row-1];
        }
    }else {
        for (int i = 0; i < row1; i++)
        {
            sum[row1-1][i] = arr2[row1-1][i];
            sum[i][row1-1] = arr2[i][row1-1];
        }
    }
    
        
    

    /*

    abs(row1 - row2)

    if(row1 > row2) {}
    {
    sum [row1]
     for -> row2 - 0-2
     for -> abs(row1 - row2){ - differ
        row1 - vlaue
     }
    }esle {
    sum [row2+]
        for -> row1 // smaller
        for -> abs(row1 - row2){
        0
     }
    }
    */

    /* Printing the result */
    printf("Your result is...... \n");
    for (int i = 0; i < newRow; i++)
    {
        for (int j = 0; j < newCol; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");        
    }
    

    // for(int i = 0; i < row1; i++){
    //     for(int j = 0; j < col1; j++){
    //         printf("%d\t",sum[i][j]);
    //     }
    //     if (row == row1)
    //     {
    //         // printf("if\t");
    //         // printf("%d", abs(col - col1) * row);
    //         for (int i = 0; i < abs(col - col1); i++)
    //         {
    //             // printf("asfd");
    //             printf("0");
    //         }
    //     }else {
    //         for (int i = 0; i < abs(row - row1); i++)
    //         {
    //             printf("0");
    //         }
    //     }
        
        
    //     printf("\n");
    // }
}