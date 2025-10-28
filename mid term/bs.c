#include <stdio.h>

int main(){

    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int size = 11;

    int l = 0; 
    int r = size-1;

    while(l<r){
        int mid = (l+r)/2;

        int num = 5;

        if(num == arr[mid]){
            printf("Element found!");
        }
        else if(num < arr[mid]){
            r = mid - 1;
        }
        else if(num > arr[mid]){
            l = mid + 1;
        }
    }

    return 0;
}