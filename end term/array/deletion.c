#include <stdio.h>

int main(){
    int a[50],size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i=1;i<=size;i++){
        printf("Enter the element %d of the array: ", i);
        scanf("%d", &a[i]);
    }

    for (int i=1;i<=size;i++){
        printf("Element %d: %d\n", i, a[i]);
    }

    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if(pos<=0 || pos>size){
        printf("Invalid Position!");
    }
    else{

    for (int i=pos;i<size;i++){
        a[i] = a[i+1];
    }

    size--;

    for (int i=1;i<=size;i++){
        printf("Element %d: %d\n", i, a[i]);
    }
    }
}