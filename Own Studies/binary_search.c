#include<stdio.h>

int main(){
    int lmt;
    printf("Enter the lmt: ");
    scanf("%d",&lmt);

    int arr[lmt];

    printf("Enter the elements one by one.... \n");

    for(int i = 0; i < lmt; i++){
        scanf("%d",&arr[i]);
    }

    int temp = 0;
    for(int i = 0; i < lmt; i++){
        for(int j = 0; j < lmt; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Printing the data you presented.... \n");
    for(int i = 0; i < lmt; i++){
        printf("%d \t", arr[i]);
    }

    printf("\n");
    int find;
    printf("Enter the value you want to find: ");
    scanf("%d",&find);

int low = 0;
    int high = lmt - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == find){
            printf("Value found in the position: %d", mid);
            return 0;
            // return arr[mid];
        } else if(arr[mid] < find){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Not found !");
    return -1;
}