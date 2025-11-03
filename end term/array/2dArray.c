#include <stdio.h>

int main(){

    int rows,columns;

    printf("Enter the no of rows: ");
    scanf("%d", &rows);

    printf("Enter the no of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements: \n");

    for (int i=1; i<=rows;i++){
        for (int j=1; j<=columns; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements are: \n");
    for (int i=1; i<=rows;i++){
        for (int j=1; j<=columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}