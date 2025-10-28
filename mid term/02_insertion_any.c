#include <stdio.h>

int main(){
    int arr[50],size,i,num,pos;

    printf("Enter size of array: ");
    scanf("%d", &size);

    if (size > 50){
        printf("Maximum size exceeded!! (Max Size 50)");
    }
    else{
        printf("Enter the elements of the array: \n");

        for (i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        printf("Enter the number to insert: ");
        scanf("%d", &num);

        printf("Enter the position: ");
        scanf("%d", &pos);

        if (pos <= 0 || pos > size + 1){
            printf("Invalid Position!!");
        }
        else{
            for (i = size-1; i >= pos-1; i--){
                arr[i+1] = arr[i];
            }
            arr[pos - 1] = num;
            size++;

            printf("The elements of the array are: ");

            for (i=0;i<size;i++){
                printf("%d ", arr[i]);
            }
        }

    }

    return 0;
}