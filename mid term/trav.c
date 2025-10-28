#include <stdio.h>

int main(){

    int arr[50],size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if(size > 50){
        printf("Overflow condition\n");
    }
    else{
        
        for(i=0; i<size; i++){
            printf("Enter elements %d of the array: ",i+1);
            scanf("%d", &arr[i]);
        }

        printf("The elements of the array are: ");

        for(i=0; i<size; i++){
            printf("%d ", arr[i]);
        }

        printf("\n");

    return 0;
}}