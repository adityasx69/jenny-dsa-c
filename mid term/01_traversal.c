#include <stdio.h>

int main(){

    int arr[100],size,i;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");

    for (i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");

    for (i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}