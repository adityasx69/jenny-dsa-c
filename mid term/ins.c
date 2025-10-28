#include <stdio.h>

int main(){

    int arr[50],size,i,num,pos;

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

        printf("Enter the number to insert: ");
        scanf("%d", &num);

        printf("Enter the position to insert: ");
        scanf("%d", &pos);

        if (pos < 0 || pos > size + 1){
            printf("Invalid position!\n");
        }
        else{
            for (i = size-1; i>pos-1; i--){
                arr[i+1] = arr[i];
            }
            arr [pos-1] = num;
            size++;

        printf("The elements of the array after insertion are: ");

        for(i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
        }
    }

    return 0;
}