// #include <stdio.h>

// int main(){

//     int arr[50],n,i,j;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     if(n>50){
//         printf("Overflow Condition!\n");
//     }
//     else{
//         printf("Enter the elements in the array: ");
        
//         for(i=0; i<n; i++){
//             scanf("%d", &arr[i]);
//         }

//         printf("\n");

//         printf("Elements of the array: ");
        
//         for(i=0; i<n; i++){
//             printf("%d ",arr[i]);
//         }

//         for(i=0; i<n-1;i++){
//             for(j=0; j<n-1-i; j++){
//                 if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 }
//             }

//             printf("Updated elements of the array: ");
        
//             for(i=0; i<n; i++){
//                 printf("%d ", arr[i]);
//             }

//         }

//     }

//     return 0;
// }


