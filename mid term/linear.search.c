#include <stdio.h>

int main(){

    int arr[50],size,num;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array\n");

    for(int i=0; i<size; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int found = 0;

    printf("Enter the element to find: ");
    scanf("%d", &num);

    for(int i=0; i<size; i++){
        if (arr[i] == num){
            printf("Element found!\n");
            printf("Element found at position %d \n", i+1);

            found = 1;
        }
    }

    if(found == 0){
        printf("Element not found!\n");
    }

    return 0;
}