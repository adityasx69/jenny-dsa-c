#include <stdio.h>

int main(){

    int arr[50],s,num,i;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    int l=0; int r= s - 1;
    int found = 0;

    if (s > 50){
        printf("Overflow Condition!\n");
    }
    else{
        printf("Enter the elements of the array\n");

        for(i=0; i<s; i++){
            printf("Enter the element %d of the array: ", i+1);
            scanf("%d", &arr[i]);
        }

        for(i=0; i<s; i++){
            printf("%d ", arr[i]);
        }
        
        printf("\n");

        printf("Enter element to find: ");
        scanf("%d", &num);

        while(l < r){

            int mid = (l+r)/2;

            if(num == arr[mid]){
                printf("Element found\n");
                printf("Element found at position %d\n", mid+1);
                found = 1;
                break;
            }
            else if(num < arr[mid]){
                r = mid - 1;
            }
            else if(num > arr[mid]){
                l = mid + 1;
            }
        }
            if(found == 0){
                printf("Element not found!\n");
            }
    }

    return 0;
}