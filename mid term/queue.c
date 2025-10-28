#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){

    if (rear == N-1){
        printf("Overflow condition!\n");
    }
    else if (front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }}

    void dequeue(){
        if (front == -1 && rear == -1){
            printf("Underflow condition!\n");
        }
        else if (front == rear){
            printf("%d\n", queue[front]);
            front = rear = -1;
        }
        else {
            printf("%d\n", queue[front]);
            front++;
        }
    }

    void peek(){
        if (front == -1 && rear == -1){
            printf("Underflow condition!\n");
        }
        else{
            printf("%d\n", queue[front]); 
        }
    }

    void display(){
        if (front == -1 && rear == -1){
            printf("Underflow condition!\n");
        }
        else{
            for (int i = front; i <= rear; i++){
                printf("%d\n", queue[i]);
            }
        }
    }

    int main(){
        enqueue(2);
        enqueue(5);
        enqueue(-1);
        display();
        peek();
        dequeue();
        peek();
        display();

        return 0;
    }