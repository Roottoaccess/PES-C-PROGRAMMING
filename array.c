#include<stdio.h>
//#include<conio.h>

int main(){
	/* Array */
	
	// Great servant but a poor master.....
	int arr[10] = {1,2,3,4,5};
	// printf("%d", arr[3]);
	

	arr[2] = 25;
	arr[3] = arr[2];
	arr[4] = arr[3];
	for(int i = 0;i < 10;i++){
		printf("%d\n",arr[i]);
	}

	/* Array CRUD operation */


	/* Character Array */
	// char str[6] = {'H','e','l','l','o','\0'};

	// printf("%c",str[0]);

	char str[20] = "Hello, World!";
	/* Checking the length of the array */
	printf("%s\n",str);

	int len = strlen(str);

	printf("The length of the character array is: %d",len);

	/* Program for 2-D array*/

	// int matrix[2][2] = {{1,2},{3,4}};

	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0;j < 2; j++){
	// 		printf("%d ",matrix[i][j]);
	// 	}
	// 	printf("\n");
	// }

// int a[2][3] = {{1,2,5},{3,4,6}};
	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0;j< 3; j++){
	// 		printf("%d\t",a[i][j]);
	// 	}
	// 	printf("\n");
	// }

	/* Do the matrix multiplication......*/

	/* calculating the array memory have to learn..... */

	
	return 0;
}

