#include <stdio.h>

int main(){

    int A[5] = {2,42,23,12,4};
    int n = 5;

    for (int i=0; i < n-1; i++){
        for (int j=0; j < n-1-i; j++){
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}