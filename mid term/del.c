#include <stdio.h>

int main(){
    
    int arr[50],size,pos;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    if(size > 50){
        printf("Overflow condition!\n");
    }
    else{

        printf("Enter the elements of the array: ");
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }

        printf("Elements of the array: ");
        
        for(int i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Enter the position you want to delete: ");
        scanf("%d", &pos);

        if(pos < 0 || pos > size){
            printf("Invalid position!\n");
        }
        else{
            for(int i=pos-1; i<size; i++){
                arr[i] = arr[i+1];
            }
            size--;
            
            printf("Updated array: ");
            
            for(int i=0; i<size; i++){
                printf("%d " ,arr[i]);
            }
            printf("\n");
        }
    }

    return 0;
}