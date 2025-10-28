#include <stdio.h>

int main(){

    int a[10] = {2,18,25,32,49,54,63,75,86,99};

    int data = 99;

    int l = 0,r = 10;
    int found = 0;

    while (l < r){
        int mid = (l+r) / 2;

        if(data == a[mid]){
            printf("The index of the number is %d\n", mid);
            printf("The pos of the number is %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(data < a[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(found == 0){
        printf("Element not found!");
    }

    return 0;
}