#include <stdio.h>

int main(){

    int A[] = {45,78,32,65,21};

    for(int i=0; i<5; i++){
            if(A[i]>A[i+1]){
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
    }

    for(int i=0; i<5; i++){
            printf("%d ",A[i]);
    }

    return 0;
}